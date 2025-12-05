import sys
t=int(sys.stdin.readline())
for _ in range(t):
    s=input()
    s2 = list(s.split("\\0"))
    print(len(s.replace("\\0",""))+len(s2),len(s2[0]))