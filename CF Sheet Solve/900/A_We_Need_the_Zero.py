import sys
input = lambda: sys.stdin.readline().strip()
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    for i in range(2^8):
        b = [num^i for num in l]
        xor = b[0]
        for j in range(1,len(b)):
            xor ^= b[j]
        if xor == 0:
            print(i)
            break
    print(-1)