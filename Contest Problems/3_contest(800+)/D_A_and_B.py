n = int(input())
def g(ch):
    p = []
    for i, c in enumerate(a):
        if c == ch:
            p.append(i)
    k = len(p)
    if k <= 1:
        return 0
    b = [p[i] - i for i in range(k)]
    med = b[k//2]
    s = 0
    for x in b:
        s += abs(x - med)
    return s
for _ in range(n):
    m = int(input())
    a = input().strip()

    print(min(g('a'), g('b')))
