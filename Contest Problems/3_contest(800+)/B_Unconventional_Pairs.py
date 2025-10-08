n = int(input())
for _ in range(n):
    m = int(input())
    a = list(map(int, input().split()))
    a.sort()
    diff = []
    for i in range(0,m,2):
        diff.append(abs(a[i]-a[i+1]))
    print(max(diff))