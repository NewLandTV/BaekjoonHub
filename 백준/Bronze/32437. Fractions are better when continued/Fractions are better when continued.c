#include <stdio.h>

int dp[41];

int F(int n);

int main(void)
{
    int n;
        
    dp[0] = dp[1] = 1;
    
    scanf("%d", &n);
    printf("%d", F(n + 1));
    
    return 0;
}

int F(int n)
{
    n--;
    
    if (dp[n] != 0)
    {
        return dp[n];
    }
    
    dp[n] = F(n) + F(n - 1);
    
    return dp[n];
}