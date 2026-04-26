from collections import deque

n, h, l = map(int, input().split())
x = list(map(int, input().split()))

graph = [[] for _ in range(n)]
for _ in range(l):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

d = [-1] * n
for h in x:
    d[h] = 0

q = deque(x)
while q:
    cur = q.popleft()
    for next in graph[cur]:
        if d[next] == -1:
            d[next] = d[cur] + 1
            q.append(next)

print(d.index(-1) if -1 in d else d.index(max(d)))