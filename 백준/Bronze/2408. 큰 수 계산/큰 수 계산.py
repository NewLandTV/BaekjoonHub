n = int(input())
e = ""

for _ in range(n * 2 -1):
    e += input()

e = e.replace("/", "//")

print(eval(e))