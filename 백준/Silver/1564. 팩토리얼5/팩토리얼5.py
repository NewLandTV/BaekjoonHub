n = int(input())
res = 1

for i in range(1, n + 1):
    res = res * i
    if len(str(res)) > 16:
        res = int(str(res)[-16:])
    while res % 10 == 0:
        res //= 10
    
print("%05d" % int(str(res)[-5:]))