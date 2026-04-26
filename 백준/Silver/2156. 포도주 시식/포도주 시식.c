#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int l[10000], dp[10001] = { 0, };
	int max;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &l[i]);
	}
	
	dp[1] = l[0];
	max = dp[1];
	
	if (n > 1)
	{
		dp[2] = l[0] + l[1];
		max = dp[2];
	}
	if (n > 2)
	{
		dp[3] = Max(l[0] + l[2], l[1] + l[2]);
		max = Max(max, dp[3]);
	}
	
	for (i = 4; i <= n; i++)
	{
		dp[i] = dp[i - 2] + l[i - 1];
		dp[i] = Max(dp[i], Max(dp[i - 3], dp[i - 4]) + l[i - 2] + l[i - 1]);
		max = Max(max, dp[i]);
	}
	
	printf("%d", max);
	
	return 0;
}