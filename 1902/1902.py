def f(n):
    print(n)
    if(n > 1): f(n-1)

n = int(input())
f(n)