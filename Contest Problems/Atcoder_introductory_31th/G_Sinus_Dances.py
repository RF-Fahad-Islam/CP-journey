n:int = int(input())

def A(n:int):
    ans=""
    for i in range(n):
        ans+=f"sin({i+1}"
        if(i!=n-1):
            #until getting to last
            ans += "-" if(i%2==0) else '+'

    for i in range(n):
        ans += ")"
    return ans

def S(n:int):
    ans = "("*(n-1)
    for i in range(n):
        ans+=f"{A(i+1)}+{n-i}"
        if(i!=n-1):
            ans+=")"
    return ans
print(S(n))
