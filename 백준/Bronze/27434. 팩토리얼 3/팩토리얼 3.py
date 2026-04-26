import sys

sys.set_int_max_str_digits(100000000)

n = int(input())
result = 1

for i in range(2, n + 1):
    result *= i

print(result)