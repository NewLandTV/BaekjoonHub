def f(n, s):
    return s[n:] + s

z = int(input())

for _ in range(z):
    datas = input().split()
    n, c = map(int, datas[0:2])
    s = datas[2]
    k = f(n, s)
    for _ in range(c - 1):
        k = f(n, k)
    print(k)