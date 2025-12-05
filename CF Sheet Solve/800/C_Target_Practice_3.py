import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    lists_of_lines = [input() for _ in range(10)] 
    score = 0
    # for i in range(5):
    #     for j in range(5):
    #         if lists_of_lines[i][j]=='X':
    #             score+= (i-j+1) if j-i<0 else j 
    scores= [(i-j+1) if j-i<0 else j for i in range(5) for j in range(5) if lists_of_lines[i][j]=='X']
    print(scores)