import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    x = int(input())
    max_n = max(l)
    min_n = min(l)
    if (x>max_n or x<min_n): print("NO")
    else: print("YES")
        