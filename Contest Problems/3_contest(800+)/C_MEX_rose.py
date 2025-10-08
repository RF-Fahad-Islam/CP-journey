import sys
test = int(sys.stdin.readline())


for _ in range(test):
    n,k = list(map(int, sys.stdin.readline().split()))
    a = list(map(int, sys.stdin.readline().split()))
    elems = [0]*(n+1)
    for x in a:
        elems[x]+=1
    mis_cnt = 0
    for i in range(k):
        if(elems[i] == 0):
            mis_cnt+=1

    k_count = elems[k]
    print(max(mis_cnt, k_count))