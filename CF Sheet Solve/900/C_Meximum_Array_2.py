import sys
input = sys.stdin.readline

T = int(input())
BIG = 10**9 

for _ in range(T):
    n, k, q = map(int, input().split())
    cons = [tuple(map(int, input().split())) for _ in range(q)]

    x = [0] * n
    y = [0] * n
    t2 = []

    for t, l, r in cons:
        l -= 1
        r -= 1
        if t == 1:
            for i in range(l, r + 1):
                x[i] = 1
        else:
            t2.append((l, r))
            for i in range(l, r + 1):
                y[i] = 1
    
    a = [0] * n
    for i in range(n):
        if x[i] and y[i]:
            a[i] = k + 1
        elif x[i]:
            a[i] = k
        else:
            a[i] = -1

    t2.sort(key=lambda p: p[1])

    for v in range(k):
        for l, r in t2:
            has = False
            for i in range(l, r + 1):
                if a[i] == v:
                    has = True
                    break
            if not has:
                for i in range(r, l - 1, -1):
                    if a[i] == -1:
                        a[i] = v
                        break
    
    for i in range(n):
        if a[i] == -1:
            a[i] = k + 1
            
    print(*a)