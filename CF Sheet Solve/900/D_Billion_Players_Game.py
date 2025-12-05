import sys
input = lambda: sys.stdin.readline().strip()

t = int(input())

for _ in range(t):
    n, l, r = map(int, input().split())
    a = [int(x) for x in input().split()]
    
    x, y = 0, 0
    u = []
    
    for v in a:
        if v < l:
            x += l - v
            y += r - v
        elif v > r:
            x += v - l
            y += v - r
        else:
            x += l - v
            y += r - v
            u.append(v)
            u.append(v)
            
    u.sort(reverse=True)
    
    m = min(x, y)
    
    for v in u:
        x += v - l
        y += v - r
        m = max(m, min(x, y))
        
    print(m)