#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j;
	int k;
	int n;
	int v[50000];
	int dp[50000];
	
	scanf("%d", &k);
	
	for (i = 1; i <= k; i++)
	{
		scanf("%d", &n);
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &v[j]);
			
			if (j == 0)
			{
				dp[0] = v[0];
			}
			else if (j == 1)
			{
				dp[1] = Max(v[0], v[1]);
			}
			else
			{
				dp[j] = Max(dp[j - 1], v[j] + dp[j - 2]);
			}
		}
		
		printf("Data Set %d:\n", i);
		printf("%d\n\n", dp[n - 1]);
	}
	
	return 0;
}