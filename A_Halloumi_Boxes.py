import sys
test = int(sys.stdin.readline())

for _ in range(test):
    n,k = list(map(int,sys.stdin.readline().split()))
    l = [int(x) for x in sys.stdin.readline().split()]
    sort_l = l[:]
    sort_l.sort()
    print("YES" if k>1 or sort_l==l else "NO")