#include <stdio.h>
#include <stdlib.h>

#define Min(a, b) ((a) > (b) ? (b) : (a))

int main(void)
{
	int i;
	int n;
	int* dp;
	
	scanf("%d", &n);
	
	dp = (int*)malloc(sizeof(int) * (n + 1));
	
	dp[0] = dp[1] = 0;
	
	for (i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		
		if (!(i & 1))
		{
			dp[i] = Min(dp[i], dp[i >> 1] + 1);
		}
		
		if (i % 3 == 0)
		{
			dp[i] = Min(dp[i], dp[i / 3] + 1);
		}
	}
	
	printf("%d", dp[n]);
	free(dp);
	
	return 0;
}