n = int(input())

if n == 0:
    print("NO")
    exit()
    
f = [1] * 20
for i in range(1, 20):
    f[i] = f[i - 1] * i
    
for i in range(19, -1, -1):
    if n >= f[i]:
        n -= f[i]
    if n == 0:
        print("YES")
        exit()
        
print("NO")