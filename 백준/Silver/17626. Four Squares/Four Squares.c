#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	int n;
	int dp[50001] = { 0, };
	int min;
	
	scanf("%d", &n);
	
	for (i = 1; i <= pow(n, 0.5); i++)
	{
		dp[i * i] = 1;
	}
	
	dp[2] = 2;
	dp[3] = 3;
	
	for (i = 1; i <= n; i++)
	{
		min = 4;
		
		if (dp[i] != 0)
		{
			continue;
		}
		
		for (j = 1; j <= pow(i, 0.5); j++)
		{
			if (dp[i - j * j] + 1 < min)
			{
				min = dp[i - j * j] + 1;
			}
		}
		
		dp[i] = min;
	}
	
	printf("%d", dp[n]);
	
	return 0;
}