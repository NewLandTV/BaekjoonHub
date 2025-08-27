for _ in range(int(input())):
    n, *d = map(int, input().split())
    res = False
    for i in range(1, n):
        if (d[i-1] << 1) > d[i]:
            break
    else : res = True

    print("Denominations:", *d)
    print(["Bad coin denominations!", "Good coin denominations!"][res], "\n")