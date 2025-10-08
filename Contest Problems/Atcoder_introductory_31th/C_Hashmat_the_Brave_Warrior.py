import sys
while True:
    try:
        a,b = list(map(int,sys.stdin.readline().split()))
        print(abs(a-b))
    except:
        break