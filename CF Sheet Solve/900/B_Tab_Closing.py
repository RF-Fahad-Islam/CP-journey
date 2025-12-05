import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    a,b,n = list(map(int,input().split()))
    move = 0
    
    if (a/n>=b or b>=a):
        move+=1
    else:
        move+=2
        
    print(move)