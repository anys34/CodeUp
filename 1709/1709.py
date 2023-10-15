n = input()

result = list(map(int, input().split()))

result.sort(reverse=True)
print(*result)