import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    a,b = list(map(int,input().split()))
    x = input()
    s = input()
    i=0
    found = 0
    while i<=21:
        x += x
        i +=1
        if s in x:
            print(i)
            found = 1
            break
    print(-1 if not found else 0)
    
    