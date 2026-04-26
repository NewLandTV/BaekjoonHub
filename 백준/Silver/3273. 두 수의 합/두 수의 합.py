n = int(input())
a = set(int(i) for i in input().split())
x = int(input())
c = 0

for i in a:
    if x - i in a:
        c += 1
        
print(c // 2)