import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n = int(input())
    if(n-(n//3)*3 == 1 or (n//3+1)*3-n == 1):
        print("First")
    else:
        print("Second")
        