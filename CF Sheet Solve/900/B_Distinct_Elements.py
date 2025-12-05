import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))
    
    a = []
    new_val = 1
    prev_b = 0
    prev_diff = 0

    for i in range(n):
        diff = b[i] - prev_b
        prev_b = b[i]

        if diff > prev_diff:
            a.append(new_val)
            new_val += 1
        else:
            a.append(a[-1])
        prev_diff = diff

    print(*a)
