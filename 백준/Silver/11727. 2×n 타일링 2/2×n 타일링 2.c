#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int dp[1001] = { 0, };
	
	scanf("%d", &n);
	
	dp[1] = 1;
	dp[2] = 3;
	
	for (i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	
	printf("%d", dp[n]);
	
	return 0;
}