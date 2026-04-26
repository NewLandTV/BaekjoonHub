dp = {}
dp[0] = 0

def f(n):
    if n < 0:
        return 0
    if n in dp:
        return dp[n]
    if n < 10:
        s = n * (n + 1) >> 1
        dp[n] = s

        return s

    x, digit, s = n, 0, 0

    while x > 9:
        x //= 10
        digit += 1

    for i in range(x):
        s += 10 ** digit * i

    p, q = f(10 ** digit - 1), n - 10 ** digit * x
    s += f(q) + (p + q + 1) * x
    dp[n] = s

    return s

l, u = map(int, input().split())

print(f(u) - f(l - 1))