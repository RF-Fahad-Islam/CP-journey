import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    streak = 0
    streak_list = [0]
    for i,b in enumerate(l):
        if b==0:
            streak+=1
            if i==len(l)-1:streak_list.append(streak)
        else:
            streak_list.append(streak)
            streak = 0
    print(max(streak_list))
    