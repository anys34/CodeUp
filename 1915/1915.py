memo={1:1,2:1}

def f(x) :
    if x in memo :
        return memo[x]
    memo[x]=f(x-1)+f(x-2)
    return memo[x]

n=int(input())
print(f(n))