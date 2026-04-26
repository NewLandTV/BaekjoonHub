import sys
input = sys.stdin.readline

n, k = map(int, input().split())
a = list(map(int, input().split()))

d = {}
for i in range(n):
    v = a[i]
    if v not in d:
        d[v] = []
    d[v].append(i)

max_len = 1
for _, idx in d.items():
    l = 0
    for r in range(len(idx)):
        while idx[r] - idx[l] - r + l > k:
            l += 1
        max_len = max(r - l + 1, max_len)
print(max_len)