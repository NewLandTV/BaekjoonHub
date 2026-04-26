a, b = map(int, input().split())

print(a // b, end="")

if not a % b:
    exit()

print(".", end="")

for i in range(0, 1000):
    if not a % b:
        break

    a = a % b * 10

    print(a // b, end="")