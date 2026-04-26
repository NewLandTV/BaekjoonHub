n = int(input())

for i in range(1, n + 1):
    str = input().split()

    print(f"Case #{i}: {' '.join(str[::-1])}")