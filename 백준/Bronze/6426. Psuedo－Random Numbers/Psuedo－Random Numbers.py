t = 1

while True:
    z, i, m, l = map(int, input().split())

    if z == 0 and i == 0 and m == 0 and l == 0:
        break

    s = set()

    while True:
        l = (z * l + i) % m
        size = len(s)
        s.add(l)

        if size == len(s):
            break

    print(f"Case {t}: {len(s)}")

    t += 1