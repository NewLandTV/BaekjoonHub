from collections import deque

s = input()
stack = deque()
count = 0

for c in s:
    stack.append(c)

    if len(stack) < 4 or stack[-1] != "k":
        continue

    temp = ""

    for i in reversed(range(1, 5)):
        temp += stack[-i]

    if temp == "kick":
        count += 1

print(count)