n = int(input())
d = {}

for _ in range(n):
    title = input().strip()
    if title in d:
        d[title] += 1
    else:
        d[title] = 1

m = max(d.values())
max_keys = sorted([k for k, v in d.items() if v == m])
print(max_keys[0])