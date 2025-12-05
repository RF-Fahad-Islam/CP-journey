import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    lists_of_lines = [input()[:-1] for _ in range(10)] 
    points = [
                '1111111111',
                '1222222221',
                '1233333321',
                '1234444321',
                '1234554321',
                '1234554321',
                '1234444321',
                '1233333321',
                '1222222221',
                '1111111111',
              ]
    score = 0
    for n,line in enumerate(lists_of_lines):
        for i,s in enumerate(line):
            if s=='X': score += int(points[n][i])
    print(score)