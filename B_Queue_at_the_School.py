n,op = list(map(int,input().split()))
s = list(input())
res = s[:]

for i in range(0,min(op,n)):
    for j in range(0,len(s)-1):
        if(s[j] == 'B' and s[j+1]=='G'):
            res[j],res[j+1] = 'G','B'
    s = res[:]
    
print("".join(res))