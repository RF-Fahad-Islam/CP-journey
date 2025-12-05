import sys
from collections import Counter
import itertools
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n,k = list(map(int,input().split()))
    s = input()
    scnt = Counter(s)
    l = list(Counter(s).values())
    odds = list(filter(lambda x:x%2!=0, l))
    
    if len(odds)>k+1:
        print("NO")
    else:
        print("YES")
        
    
    