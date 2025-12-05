import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    found = False

    limit = min(n, 100)

    for i in range(limit):
        x = a[i]
        for j in range(i + 1, n):
            y = a[j]
            if (y % x) % 2 == 0:
                print(x, y)
                found = True
                break
        if found:
            break

    if not found:
        print(-1)
