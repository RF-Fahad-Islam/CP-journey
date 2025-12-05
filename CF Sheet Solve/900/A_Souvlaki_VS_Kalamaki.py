import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    l.sort()
    
    can_win = True
    for i in range(1, n - 1, 2):
        if l[i] != l[i+1]:
            can_win = False
            break
            
    if can_win:
        print("YES")
    else:
        print("NO")