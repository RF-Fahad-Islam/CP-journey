import sys
test = int(sys.stdin.readline())

for _ in range(test):
    a = int(sys.stdin.readline())
    d = 1
    nums_included = 0
    while d*9*(10**(d-1)) < a-nums_included:
        nums_included += d*9*(10**(d-1))
        d += 1
    
    r = a - nums_included - 1
    target = 10**(d-1) + (r//d)
    print(str(target)[r%d])