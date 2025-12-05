import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n,m = list(map(int,input().split()))
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    c = [int(x) for x in input().split()]
    max_b = max(b)
    a_passables = 0
    for i in a:
        if(i>max_b):
            
    