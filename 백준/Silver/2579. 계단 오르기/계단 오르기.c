#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int s[300], dp[300];
	int max = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &s[i]);
	}
	
	if (n == 1)
	{
		printf("%d", s[0]);
		
		return 0;
	}
	else if (n == 2)
	{
		printf("%d", s[0] + s[1]);
		
		return 0;
	}
	
	dp[0] = s[0];
	dp[1] = s[0] + s[1];
	
	for (i = 2; i < n; i++)
	{
		if (i == 2)
		{
			dp[i] = Max(s[i - 1] + s[i], dp[i - 2] + s[i]);
		}
		else
		{
			dp[i] = Max(dp[i - 3] + s[i - 1] + s[i], dp[i - 2] + s[i]);
		}
	}
	
	printf("%d", dp[n - 1]);
	
	return 0;
}