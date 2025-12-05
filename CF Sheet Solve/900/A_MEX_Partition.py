import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]

    pr = set(l)
    mex = 0
    while mex in pr:
        mex+=1
    print(mex)