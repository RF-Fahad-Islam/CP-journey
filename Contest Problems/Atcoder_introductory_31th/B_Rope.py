import sys
from math import sqrt,pi
line= sys.stdin.readline().split()
n = int(line[0])
r = float(line[1])
length = 0
prev_a,prev_b = 0,0
first_a,first_b=0,0
for i in range(n):
    a,b = list(map(float,sys.stdin.readline().split()))
    if i!=0:
        length += sqrt((a-prev_a)**2+(b-prev_b)**2)
    else:
        first_a,first_b=a,b
    prev_a,prev_b = a,b
if(n>2):
    length+= sqrt((first_a-prev_a)**2+(first_b-prev_b)**2)
if(n==2):
    length *=2
length += (pi*2*r)
print(f"{length:.2f}")