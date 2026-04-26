import sys
from bisect import bisect_left
input = sys.stdin.readline

n, t = map(int, input().split())
names, times = [], [0] * n
name_list = set()
for i in range(n):
    s = input().split()
    name, ti = s[0], int(s[1])
    names.append(name)
    if i == 0:
        continue

    times[i] = (times[i - 1] - ti) % t
    if times[i] < 0:
        times[i] += t

    if 0 < ti % t <= 1000:
        name_list.add(name)

sorted_t = sorted(set(times))
m = len(sorted_t)
for i in range(n):
    idx = bisect_left(sorted_t, times[i] + 1)
    if idx < m and sorted_t[idx] <= times[i] + 1000:
        name_list.add(names[i])
        continue
    if times[i] + 1000 >= t:
        idx = bisect_left(sorted_t, 0)
        if idx < m and sorted_t[idx] <= ((times[i] + 1000) % t):
            name_list.add(names[i])
            continue
    if times[i] > t - 1000:
        idx = bisect_left(sorted_t, 0)
        if idx < m and sorted_t[idx] == 0:
            name_list.add(names[i])
            continue

print(-1 if not name_list else " ".join(sorted(name_list)))