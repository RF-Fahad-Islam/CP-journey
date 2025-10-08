import sys
test = int(sys.stdin.readline())

for _ in range(test):
    n,x = list(map(int,sys.stdin.readline().split()))
    l = [int(x) for x in sys.stdin.readline().split()]
    gas = [0]*n
    gas[0] = l[0]
    for i in range(1,n):
        gas[i] = l[i] - l[i-1]
    gas.append(2*(x - l[-1]))
    print(max(gas))

