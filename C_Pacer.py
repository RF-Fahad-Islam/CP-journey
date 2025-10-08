import sys
test = int(sys.stdin.readline())

for _ in range(test):
    n,m = list(map(int,sys.stdin.readline().split()))
    res = 0
    prev_a = 0
    prev_b = 0
    for _ in range(n):
        a,b = list(map(int,sys.stdin.readline().split()))
        
        if((a-prev_a)%2 == abs(b-prev_b)%2):
            res += a-prev_a
        else:
            res+=a-prev_a-1

        prev_a =a
        prev_b =b
    if(prev_a<m):
        res += m-prev_a
        
    print(res)