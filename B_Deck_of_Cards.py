import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n,k = list(map(int,input().split()))
    l = [int(x) for x in input().split('\n')[0]]
    left_minus = l.count(0)
    right_minus = l.count(1)
    left = n-left_minus-right_minus
    qs = min(l.count(2)*2,left)
    plus = left-qs
    if n==k:
        print("-"*n)
        continue
    print('-'*left_minus,end='')
    print("?"*(qs//2) + "+"*plus + "?"*(qs//2),end='')
    if(qs==left and qs%2!=0 and n!=1):
        print("?",end="")
    print('-'*right_minus)
    