import sys
from collections import Counter
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    cnt = Counter(l)
    cost = 0
    for key,value in cnt.items():
        if key < value:
            cost += value-key
        if key > value:
            cost+=value
    print(cost)