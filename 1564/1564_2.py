def 유클리드(a, b):
    if b == 0:
        return a
    else:
        return 유클리드(b, a % b)

a, b = map(int, input().split())
result = 유클리드(a, b)
print(result)