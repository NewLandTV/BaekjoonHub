def Factorial(n):
    p = 1

    for i in range(1, n + 1):
        p *= i

    return p

n, m = map(int, input().split())

print(Factorial(n) // (Factorial(m) * Factorial(n - m)))