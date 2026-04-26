#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	long long dp[100] = { 0, };
	
	dp[1] = 2;
	
	for (i = 3; i < 100; i++)
	{
		dp[i] = 1;
		
		for (j = 0; j < i + 1 >> 1; j++)
		{
			dp[i] *= 2;
		}
	}
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("%lld\n", n & 1 ? 0 : dp[n - 1]);
	}
	
	return 0;
}