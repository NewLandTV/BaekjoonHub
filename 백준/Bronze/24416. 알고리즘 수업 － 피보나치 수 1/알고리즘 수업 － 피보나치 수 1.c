#include <stdio.h>

int c1, c2;
int dp[41];

int F(int n);
int DP(int n);

int main(void)
{
    int n;
    
    dp[1] = dp[2] = 1;
    
    scanf("%d", &n);
    F(n);
    DP(n);
    printf("%d %d", c1, c2);
    
    return 0;
}

int F(int n)
{
    if (n == 1 || n == 2)
    {
        c1++;
        
        return 1;
    }
    
    return F(n - 1) + F(n - 2);
}

int DP(int n)
{
    if (dp[n] != 0)
    {
        return dp[n];
    }
    
    c2++;
    dp[n] = DP(n - 1) + DP(n - 2);
    
    return dp[n];
}