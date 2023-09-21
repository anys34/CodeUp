n = int(input())
v = int(n*(n+1)/2)
for i in range(0, n):
    for j in range(0, i+1):
        print(v, end=' ')
        v -= 1
    print()