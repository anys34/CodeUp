x1, y1 = map(int, input().split())
x2, y2 = map(int, input().split())

print(format(((x2-x1)**2 + (y2-y1)**2)**(1/2), '.2f'))