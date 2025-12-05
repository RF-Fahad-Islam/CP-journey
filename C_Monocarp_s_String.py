import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n = int(input())
    s = input()
    b_cnt = s.count('b')
    a_cnt = s.count('a')
    maxval = max(a_cnt,b_cnt)
    if(not a_cnt or not b_cnt ): print(-1)
    substring = maxval-min(b_cnt,a_cnt)
    if max(a_cnt,b_cnt) == a_cnt:
        if "a"*substring in s:
            print(substring)
            continue
    else:
        if "b"*substring in s:
            print(substring)
            continue
    