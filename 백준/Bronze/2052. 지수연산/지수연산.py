n = int(input())

if n < 14:
    print(1 / 2 ** n)
    exit()

s = "%.300f" % (2 ** -n)
l = len(s)

for i in range(l - 1, 1, -1):
    if s[i] != "0":
        l = i

        break

print(s[:l + 1])