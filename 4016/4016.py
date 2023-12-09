a, b, c = map(int, input().split())
result = 1

for i in range(1, min(a,b,c)+1):
    if a%i==0 and b%i==0 and c%i==0:
        result = i

print(result)
