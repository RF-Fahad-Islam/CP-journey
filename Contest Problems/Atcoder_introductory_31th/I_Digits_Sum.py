import sys

def get_sum_digs(a:int):
    digs = []
    while(a!=0):
        digs.append(a%10)
        a=a//10
    return sum(digs)


n = int(sys.stdin.readline())
all_sums = []
for i in range(1, n//2 + 1):
    a = i
    b = n-i
    all_sums.append(get_sum_digs(a)+get_sum_digs(b))
print(min(all_sums) if all_sums else 0)