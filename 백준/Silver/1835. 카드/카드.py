from collections import deque

n = int(input())
d = deque([n])
for i in range(n, 0, -1):
    d.rotate(i)
    if i == 1:
        break
    d.appendleft(i - 1)

for i in d:
    print(i, end=" ")