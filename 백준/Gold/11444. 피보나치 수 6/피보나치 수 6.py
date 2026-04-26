MOD = 1000000007

dp = {1: 1, 2: 1}

def f(n):
    if n in dp:
        return dp[n]
        
    if n % 2 == 0:
        a = f(n // 2) % MOD
        b = f(n // 2 - 1) % MOD
        dp[n] = ((a + b * 2) % MOD) * a % MOD
        return dp[n]
        
    a = f(n // 2) % MOD
    b = f(n // 2 + 1) % MOD
    dp[n] = ((a ** 2) % MOD + (b ** 2) % MOD) % MOD
    return dp[n]
    
n = int(input())

print(f(n) % MOD)