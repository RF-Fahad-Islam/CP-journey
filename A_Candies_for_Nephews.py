import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n = int(input())
    print((n//3+1)*3-n if n%3!=0 else 0)