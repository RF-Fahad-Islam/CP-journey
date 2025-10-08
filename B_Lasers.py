import sys
test = int(sys.stdin.readline())

for _ in range(test):
    n,m,x,y = list(map(int,sys.stdin.readline().split()))
    sys.stdin.readline()
    sys.stdin.readline()
    print(n+m) 