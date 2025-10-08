import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n,k = list(map(int,input().split()))
    s = input()
    freq = [0]*27
    for i in range(len(s)):
        freq[ord(s[i])-97]+=1
    if (n-k)%2 == 0:
        more_2_cnt = 0
        for i in freq:
            if i>= 2:
                more_2_cnt+=1
        
    
    