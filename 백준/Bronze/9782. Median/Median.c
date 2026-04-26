#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int d[100];
	float median;
	
	for (i = 1; ; i++)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &d[j]);
		}
		
		if (n & 1)
		{
			median = d[n >> 1];
		}
		else
		{
			median = (d[n >> 1] + d[(n >> 1) - 1]) * 0.5f;
		}
		
		printf("Case %d: %.1f\n", i, median);
	}
	
	return 0;
}