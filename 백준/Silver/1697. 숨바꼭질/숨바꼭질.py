n, k = map(int, input().split())
visit = [False] * 100001
visit[n] = True
q = [(n, 0)]

while q:
    x, count = q[0]
    del q[0]

    if x == k:
        print(count)
        break

    if x + 1 < len(visit) and not visit[x + 1]:
        visit[x + 1] = True
        q.append((x + 1, count + 1))

    if x - 1 >= 0 and not visit[x - 1]:
        visit[x - 1] = True
        q.append((x - 1, count + 1))

    if x * 2 < len(visit) and not visit[x * 2]:
        visit[x * 2] = True
        q.append((x * 2, count + 1))