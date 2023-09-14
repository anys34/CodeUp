def f(a, b):
    if (a <= b):
        print(a)
        f(a+2, b)

a, b = map(int, input().split())
f(a + 1 if a % 2 == 0 else a, b)