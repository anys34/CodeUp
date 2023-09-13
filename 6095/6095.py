n = int(input())

array = [[0]*19 for _ in range(19)]

for i in range(n):
    x, y = map(int, input().split())
    array[x-1][y-1] = 1

for i in array:
    print(*i)