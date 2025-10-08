import sys
test = int(sys.stdin.readline())

for _ in range(test):
    a,b = list(map(int,sys.stdin.readline().split()))
    if (a<b):
        print(b-a)
    elif (a%b == 0):
        print(0)
    else:
        print(((a//b)+1)*b-a)