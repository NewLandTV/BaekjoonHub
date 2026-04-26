n = int(input())
list = list(map(int, input().split()))
t, p = map(int, input().split())

x = 0

for i in list:
    if not i == 0 and i < t:
        x += 1
    else:
        x += i // t

        if i % t != 0:
            x += 1

print(x)
print(n // p, n % p)