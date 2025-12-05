letters = ['C', 'O', 'M', 'E', 'G', 'N', 'H', 'S']
solutions = []

def is_matched(assign):
    C = assign['C']; O = assign['O']; M = assign['M']; E = assign['E']
    G = assign['G']; N = assign['N']; H = assign['H']; S = assign['S']


    # Skip if any leading digit is 0
    if C == 0 or G == 0 or H == 0:
        return

    # Calculate the numbers
    COME = 1000*C + 100*O + 10*M + E
    GONE = 1000*G + 100*O + 10*N + E
    HOMES = 10000*H + 1000*O + 100*M + 10*E + S
    
    if COME + GONE == HOMES:
        print(f"{COME} + {GONE} = {HOMES}")
        return True
        
def brute_force(index, assign, used):
    if index == len(letters):
        if is_matched(assign):
            print(assign)
        return

    letter = letters[index]
    for d in range(10):
        if d not in used:
            assign[letter] = d
            used.add(d)
            brute_force(index + 1, assign, used)
            used.remove(d)
            del assign[letter]

brute_force(0, {'H':1}, set())
print("\nTotal solutions found:", len(solutions))