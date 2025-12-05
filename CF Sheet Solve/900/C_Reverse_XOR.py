def exists(n):
    for k in range(1, 31):  
        for r in range(k):    
            a = [-1]*k
            a[k-1] = 1           
            for i in range(r): a[i] = 0
            ok = True

            for j in range(k-r, k):
                b = (n >> j) & 1
                if a[j] != -1 and a[j] != b:
                    ok = False; break
                a[j] = b
            if not ok: continue

            for j in range(k-r):
                p = k-1-j
                nj = (n >> j) & 1
                if a[j] != -1 and a[p] != -1:
                    if a[j]^a[p] != nj:
                        ok = False; break
                elif a[j] != -1:
                    a[p] = a[j]^nj
                elif a[p] != -1:
                    a[j] = a[p]^nj
                else:
                    a[j] = 0
                    a[p] = nj
            if not ok: continue

            x = sum((1<<i) for i,b in enumerate(a) if b==1)
            if x>0:
                f = int(bin(x)[2:][::-1],2)
                if x ^ f == n:
                    return True
    return False

t = int(input())
for _ in range(t):
    n = int(input())
    print("YES" if exists(n) else "NO")
