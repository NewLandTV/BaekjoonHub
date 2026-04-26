#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int brands[50];
	int max = 0, k;
	int q[50] = { 0, }, total = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &brands[i]);
		
		max = Max(brands[i], max);
	}
	
	for (k = 1; k <= max; k++)
	{
		for (i = 0; i < n; i++)
		{
			if (brands[i] == k)
			{
				q[k - 1]++;
			}
		}
	}
	
	for (i = k = 1; i <= max; i++)
	{
		k *= q[i - 1];
		total += k;
	}
	
	printf("%d", total);
	
	return 0;
}