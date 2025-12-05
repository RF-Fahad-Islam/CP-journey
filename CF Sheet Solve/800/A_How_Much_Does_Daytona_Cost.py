import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n,k = list(map(int,input().split()))
    l = [int(x) for x in input().split()]
    if k not in l : 
        print("NO")
    else:
        print("YES")