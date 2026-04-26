dp = [1, 1] + [0] * 488

for x in range(2, 490):
    dp[x] = dp[x - 1] + dp[x - 2]
    
while True:
    x = int(input())
    
    if x == -1:
        break
        
    print("Hour %d: %d cow(s) affected" % (x, dp[x - 1]))