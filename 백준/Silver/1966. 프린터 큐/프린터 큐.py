import sys

input = sys.stdin.readline
t = int(input())

for i in range(t):
    n, m = map(int, input().split())
    doc = input().split()
    queue = [[index, int(doc)] for index, doc in enumerate(doc)]
    count = 0
    
    while queue:
        max = 0
        
        for i in range(len(queue)):
            if max < queue[i][1]:
                max = queue[i][1]
        
        if queue[0][1] < max:
            queue.append(queue.pop(0))

            continue

        if queue[0][0] == m:
            count += 1

            print(count)

            break

        count += 1

        queue.pop(0)