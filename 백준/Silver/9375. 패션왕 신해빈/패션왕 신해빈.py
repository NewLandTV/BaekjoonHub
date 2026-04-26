t = int(input())
for _ in range(t):
    n = int(input())
    if n == 0:
        print(0)
        continue

    s = {}
    for _ in range(n):
        type = input().split()[1]
        s[type] = s[type] + 1 if type in s else 1

    c = 1
    for type in s:
        c *= s[type] + 1
    print(c - 1)