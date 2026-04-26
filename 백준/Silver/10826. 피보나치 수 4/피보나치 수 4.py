n = int(input())

if n < 2:
    print(n)
    exit()

f1, f2, f3 = 0, 0, 1

for _ in range(n):
    f1 = f2 + f3
    f3 = f2
    f2 = f1

print(f1)