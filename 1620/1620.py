n = int(input())

div = 1
s = 0
while(s == 0 or s >= 10):
    s = 0
    while(n > 0):
        s += int(n % 10)
        n = int(n / 10)
    n=s

print(s)