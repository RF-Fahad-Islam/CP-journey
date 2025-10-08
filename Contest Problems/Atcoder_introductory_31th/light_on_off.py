from math import sqrt
while True:
    n = int(input())
    if(n==0):
        break
    print("yes" if(int(sqrt(n))**2 == n) else "no")
