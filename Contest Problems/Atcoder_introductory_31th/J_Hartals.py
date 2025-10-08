import sys

test = int(sys.stdin.readline())

for _ in range(test):
    n = int(sys.stdin.readline())
    p = int(sys.stdin.readline())
    h= []
    ans = 0
    for i in range(p):
        h.append(int(sys.stdin.readline()))
    for i in range(1,n+1):
        for j in h:
            if(i%j==0 and i%7 != 0 and (i-6)%7 !=0): #if its p's day but not fri or sat
                ans+=1
                break

    print(ans)