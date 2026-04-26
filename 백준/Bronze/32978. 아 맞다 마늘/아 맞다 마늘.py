n = int(input())
ingredients = list(map(str, input().split()))
use = list(map(str, input().split()))

for i in ingredients:
    if i not in use:
        print(i)
        
        break