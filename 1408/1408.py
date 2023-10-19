code = input()

a = ""
b = ""

for i in code:
    a += chr(ord(i) + 2)
    b += chr((ord(i) * 7) % 80 + 48)

print(a)
print(b)