import sys

input = lambda: sys.stdin.readline().strip()
test = int(input())
out_lines = []
for _ in range(test):
    n,x,y = list(map(int,input().split()))
    s = input()
    dx = abs(x); dy = abs(y)
    for c in s:
        if c == '8':
            if dx > 0 and dy > 0:
                dx -= 1; dy -= 1
            elif dx > 0:
                dx -= 1
            elif dy > 0:
                dy -= 1
        else: 
            if dx > 0 and dy<dx:
                dx -= 1
            elif dy > 0:
                dy -= 1
    out_lines.append("YES" if dx == 0 and dy == 0 else "NO")

print("\n".join(out_lines))
