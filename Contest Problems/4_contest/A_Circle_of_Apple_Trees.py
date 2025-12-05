import sys
input = sys.stdin.readline
test = int(input())

for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    
    print(len(set(l)))