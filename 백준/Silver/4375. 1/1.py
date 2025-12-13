while True:
    try:
        n = int(input())
    except:
        break

    if n == 1:
        print(1)

        continue

    one, count = 1, 1

    while True:
        one = one * 10 + 1
        count += 1

        if one % n == 0:
            print(count)

            break
