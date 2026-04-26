import sys

input = sys.stdin.readline
n, m = map(int, input().split())
p = {}

for i in range(1, n + 1):
    a = input().rstrip()
    p[a] = i
    p[str(i)] = a

for _ in range(m):
    print(p[input().rstrip()])