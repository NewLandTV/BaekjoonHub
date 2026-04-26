f = [0 for _ in range(479)]
f[0], f[1] = 1, 2

for i in range(2, len(f)):
    f[i] = f[i - 2] + f[i - 1]

while True:
    a, b = map(int, input().split())

    if a == 0 and b == 0:
        break

    c = 0
    for i in f:
        if i < a:
            continue
        if i > b:
            break
        c += 1

    print(c)