import sys
from collections import Counter
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    s = input()
    cnt = s.count(s[-1])
    print(n-cnt)
    
    