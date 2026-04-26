def time_to_minute(t):
    h, m = map(int, t.split(":"))
    return h * 60 + m

s, e, q = input().split()
s = time_to_minute(s)
e = time_to_minute(e)
q = time_to_minute(q)

check = {}
while True:
    try:
        t, nickname = input().split()

        if nickname not in check:
            check[nickname] = [False] * 2

        t = time_to_minute(t)
        if t <= s:
            check[nickname][0] = True
        elif e <= t <= q:
            check[nickname][1] = True
    except EOFError:
        break

cnt = 0
for value in check.values():
    if value == [True, True]:
        cnt += 1
print(cnt)