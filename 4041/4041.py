N = int(input())

reversed_N = int(str(N)[::-1])

digit_sum = sum(int(digit) for digit in str(N))

print(reversed_N)
print(digit_sum)