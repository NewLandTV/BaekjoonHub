n = input()
t = n
d = 1
while True:
    for i in range(10 ** d):
        ok = True
        for k in n:
            if int(k) != 0 and int(t) % int(k) != 0:
                ok = False
                break

        if ok:
            break
        t = n + str(i).zfill(d)
    if ok:
        break
    d += 1

print(t)