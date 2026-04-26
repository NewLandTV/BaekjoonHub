p, k = map(int, input().split())
prime = [False, False] + [True] * (k - 2)
good = True

for i in range(2, int(k ** 0.5) + 1):
    if prime[i]:
        for j in range(i ** 2, k, i):
            if prime[j]:
                prime[j] = False

for i in range(2, k):
    if prime[i]:
        if p % i == 0:
            good = False

            break

if good:
    print("GOOD")
else:
    print("BAD", i)