def f(n, a, b, c):
    if n == 1:
        print("Disk %d : %c to %c" % (n, a, c))
        return
    f(n - 1, a, c, b)
    print("Disk %d : %c to %c" % (n, a, c))
    f(n - 1, b, a, c)

n = int(input())
f(n, "A", "B", "C")