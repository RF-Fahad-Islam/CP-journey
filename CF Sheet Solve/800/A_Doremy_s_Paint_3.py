import sys
input = sys.stdin.readline
test = int(input())

def check_count(l:list,l_set:set)-> bool:
    #For len of list set >= 2
    cnts = [l.count(s) for s in l_set]
    return True if len(l)//2 in cnts else False
    
for _ in range(test):
    n = int(input())
    l = [int(x) for x in input().split()]
    l_set = set(l)
    print("Yes" if ((len(l_set)==2 and check_count (l,l_set)) or len(l_set)==1) else "No")
