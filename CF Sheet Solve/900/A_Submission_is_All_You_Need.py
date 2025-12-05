import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    mex = 0
    for i in range(51):
        if i not in l:
           mex=i
           break
    highcnt = [num for num in set(l) if l.count(num)>1] 
    highcntnext = list(filter(lambda x:x>mex,l))
    score = 0
    score = mex + sum(highcnt) + sum(highcntnext)
    print(max(score, sum(l)))
    