import re

s = []

while True:
    try:
        s.append(input())
    except:
        break

s = "".join(l.strip() for l in s)

numbers = re.findall(r"\d+", s)
total = sum(int(n) for n in numbers)

print(total)