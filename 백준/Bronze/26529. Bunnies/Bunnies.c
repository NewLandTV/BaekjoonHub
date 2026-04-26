#include <stdio.h>

int dp[46];

int F(int x);

int main(void)
{
    int n;
    int x;
    
    dp[0] = 1;
    dp[1] = 1;
    
    scanf("%d", &n);
    
    while (n--)
    {
        scanf("%d", &x);
        printf("%d\n", F(x));
    }
    
    return 0;
}

int F(int x)
{
    if (dp[x] != 0)
    {
        return dp[x];
    }
    
    dp[x] = F(x - 1) + F(x - 2);
    
    return dp[x];
}