#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int dp[101][10] = { 0, };
	int sum = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i < 10; i++)
	{
		dp[1][i] = 1;
	}
	
	for (i = 2; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][1] % 1000000000;
		
		for (j = 1; j < 9; j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
		
		dp[i][9] = dp[i - 1][8] % 1000000000;
	}
	
	for (i = 0; i < 10; i++)
	{
		sum += dp[n][i];
		sum %= 1000000000;
	}
	
	printf("%d", sum);
	
	return 0;
}