from collections import deque

n, c = map(int, input().split())
tree = [[] for _ in range(n)]
for _ in range(c):
    e, b1, b2 = map(int, input().split())
    tree[e - 1] = [b1 - 1, b2 - 1]

d = [0] * n
d[0] = 1

q = deque([0])
while q:
    cur = q.popleft()
    for child in tree[cur]:
        if d[child] != 0:
            continue
        d[child] = d[cur] + 1
        q.append(child)

for i in d:
    print(i)