import sys
test = int(sys.stdin.readline())

for _ in range(test):
    x,n = list(map(int,sys.stdin.readline().split()))
    l = [x if(i%2==0) else -x for i in range(n)]
    print(sum(l))