n, k = map(int, input().split())
d = n ** 2 + (n - k + 1) * 4
if d < 0 or d != int(d ** 0.5) ** 2:
    print("NO")
else:
    print("YES")