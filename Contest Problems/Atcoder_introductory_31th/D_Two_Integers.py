import sys

x, y = map(int, sys.stdin.readline().split())

if x % y == 0:
    print(-1)
elif (2 * x) % y != 0:
    print(2 * x)
else:
    print(x)
