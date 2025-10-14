fibo = [0] * 1500000
fibo[0] = 0
fibo[1] = 1
n = int(input())

for i in range(2, 1500000):
    fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 1000000

print(fibo[n % 1500000])