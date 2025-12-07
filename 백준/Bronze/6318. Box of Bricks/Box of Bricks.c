#include <stdio.h>

int main(void)
{
	int t = 1, i;
	int n;
	int h[50];
	int sum, mean, k;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		sum = 0;
		k = 0;
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &h[i]);
			
			sum += h[i];
		}
		
		mean = sum / n;
		
		for (i = 0; i < n; i++)
		{
			if (mean < h[i])
			{
				k += h[i] - mean;
			}
		}
		
		printf("Set #%d\n", t++);
		printf("The minimum number of moves is %d.\n\n", k);
	}
	
	return 0;
}