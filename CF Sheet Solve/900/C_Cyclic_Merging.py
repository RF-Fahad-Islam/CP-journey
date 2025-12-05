import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    costs = [0]*n
    for i in range(len(l)):
        if i==len(l)-1:
            costs[i] = max(l[i],l[0])
        else:
            costs[i] = max(l[i],l[i+1])
    costs_arr = sorted(costs)[0:-1]
    print(sum(costs_arr))