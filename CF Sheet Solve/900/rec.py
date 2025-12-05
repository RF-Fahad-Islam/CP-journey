def printnum(n:int):
    print(n)
    if(n==6): return
    printnum(n+1)

printnum(1)