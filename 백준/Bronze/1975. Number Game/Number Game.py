def f(n, b):
    count = 0
    while n % b == 0:
        n //= b
        count += 1
    return count

t = int(input())

for _ in range(t):
    n = int(input())
    v, sum = 0, 0
    for b in range(2, 1001):
        v = f(n, b)
        sum += v
    print(sum)