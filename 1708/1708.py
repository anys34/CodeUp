a = int(input())

li = list(map(int, input().split()))
li2 = sorted(li, reverse=True)

for i in range(a):
    b = li2.index(li[i])
    print(f"{li[i]} {b+1}")
