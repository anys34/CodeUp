a = input()
b = int(a)
sum = int(a[::-1]) + b
if sum == int(str(sum)[::-1]):
    print("YES")
else:
    print("NO")