import sys
from math import ceil
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    even = [i for i in l if i%2==0]
    odd = [i for i in l if i%2 != 0]
    if len(odd)!= 0:
        odd = sorted(odd,reverse=True)
        result = 0
        result += sum(even)
        for i,n in enumerate(odd):
            if i==ceil(len(odd)/2) and len(odd)>1: break
            result+=n
        print(result)
    else:
        print(0)
    