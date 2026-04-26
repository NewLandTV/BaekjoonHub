import sys
from collections import defaultdict
input = sys.stdin.read().split()

n = int(input[0])
l = list(map(int, input[1:]))

cnt = defaultdict(int)
for i in l:
    cnt[i] += 1

num_p = sorted(cnt.keys())
m = len(num_p)

sum_areas = defaultdict(int)
for i in range(m):
    x = num_p[i]
    cnt_x = cnt[x]
    if cnt_x >= 2:
        sum_areas[x * 2] += x ** 2 * (cnt_x // 2)

    for j in range(i + 1, m):
        y = num_p[j]
        cnt_y = cnt[y]
        sum_areas[x + y] += x * y * min(cnt_x, cnt_y)
print(max(sum_areas.values()) if sum_areas else 0)