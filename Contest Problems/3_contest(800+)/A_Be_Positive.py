n = int(input())
for _ in range(n):
    m = int(input())
    a = list(map(int, input().split()))
    op = 0
    op += a.count(0)
    minus_cnt = a.count(-1)
    if(minus_cnt % 2 == 1):
        op += 2
    print(op)


