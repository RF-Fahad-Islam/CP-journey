import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    x,y,z = list(map(int,input().split()))
    print("YES" if (x & y & ~z) == 0 and (x & z & ~y) == 0 and (y & z & ~x) == 0 else "NO")