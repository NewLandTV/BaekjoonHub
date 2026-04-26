k, n = map(int, input().split())
lans = [int(input()) for _ in range(k)]
x = 1
max = max(lans)

while x <= max:
    mid = x + max >> 1
    sum = 0

    for l in lans:
        sum += l // mid

    if sum < n:
        max = mid - 1
    else:
        x = mid + 1

print(x - 1)