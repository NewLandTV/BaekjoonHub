#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n, m;
	int cards[100];
	int maxSum = 0;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &cards[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (i == j || j == k || i == k)
				{
					continue;
				}
				
				if (cards[i] + cards[j] + cards[k] <= m && cards[i] + cards[j] + cards[k] > maxSum)
				{
					maxSum = cards[i] + cards[j] + cards[k];
				}
			}
		}
	}
	
	printf("%d", maxSum);
	
	return 0;
}