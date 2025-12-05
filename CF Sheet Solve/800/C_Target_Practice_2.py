import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    lists_of_lines = [input().strip() for _ in range(10)] 
    points = [
                '1111111111',
                '1222222221',
                '1233333321',
                '1234444321',
                '1234554321',
              ]
    score = 0
    for n in range(5):
        #line
        for j in range(10):
            #char
            if lists_of_lines[n][j]=='X': score += int(points[n][j])
            
    for n in range(5,10):
        #line
        for j in range(10):
            #char
            if lists_of_lines[n][j]=='X': score += int(points[9-n][j])
            
    print(score)