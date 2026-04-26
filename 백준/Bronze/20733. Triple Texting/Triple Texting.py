s = input()
l = len(s)
n = l // 3
lst = [s[i:i + n] for i in range(0, l, n)]

for i in range(0, 2):
    for j in range(i + 1, 3):
        if lst[i] == lst[j]:
            print(lst[i])
            exit()