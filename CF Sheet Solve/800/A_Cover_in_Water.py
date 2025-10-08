import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n = int(input())
    l = input()
    if "..." in l:
        print(2)
    else:
        print(l.count('.'))
