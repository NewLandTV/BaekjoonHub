lst = []
while True:
    s = input()
    if s == "*":
        break
    lst.append(s)

for s in lst:
    l = len(s)
    if l < 3:
        print(f"{s} is surprising.")
        continue
    for i in range(l - 1):
        d = {}
        for j in range(l - i - 1):
            ns = s[j] + s[i + j + 1]
            d[ns] = d[ns] + 1 if ns in d else 1
        is_surprising = max(d.values()) == 1
        if not is_surprising:
            break
    print(f"{s} is {"" if is_surprising else "NOT "}surprising.")