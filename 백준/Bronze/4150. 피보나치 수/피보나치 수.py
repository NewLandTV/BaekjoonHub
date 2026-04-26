n = int(input())
f = [1] * n

for i in range(2, n):
    f[i] = f[i - 2] + f[i - 1]

print(f[n - 1])