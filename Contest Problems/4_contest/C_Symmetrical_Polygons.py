import sys
input = sys.stdin.readline
test = int(input())

def func(cnt:tuple):
    if cnt[1] ==1:
        return cnt[0]

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    l_set= set(l)
    # cnts = [(num,l.count(num)) for num in l_set]
    cnts = [l.count(num) for num in l_set]
    if n%2!=0:
        if cnts.count(1)==2 and( 
            sum([num for num in l_set if l.count(num)==1])*2<sum(l)
            ):
            print(sum(l))
            continue
    else:
        if cnts.count(1)==1 and( 
            sum([num for num in l_set if l.count(num)==1])*2<sum(l)
            ):
            print(sum(l))
            continue
    print(0)
