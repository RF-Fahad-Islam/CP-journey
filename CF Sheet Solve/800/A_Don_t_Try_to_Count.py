import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    a,b = list(map(int,input().split()))
    x = input().strip()
    s = input().strip()
    i=0
    while i<=6:
        if s in x:
            print(i)
            break
        i +=1
        x+=x
    else:
        print(-1)
    
    