n = int(input())
cows = {}
for _ in range(n):
    t = tuple(sorted(input().split()))
    cows[t] = cows[t] + 1 if t in cows else 1

cows = list(cows.items())
cows.sort(key=lambda x: x[1], reverse=True)

print(cows[0][1])