import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n= int(input())
    l = [int(x) for x in input().split()]
    if(len(set(l))==len(l)): print(2**n-1)
    