n = list(map(int, input().split()))
avg = sum(n)/10
print(avg)
a = sum(i >= avg for i in n)
b = sum(i < avg for i in n)
print(a, b)