#include <stdio.h>

int main(void)
{
	int i, j, k;
	int x[10];
	int result = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			result ^= x[i] || x[j];
			
			for (k = j + 1; k < 10; k++)
			{
				result ^= x[i] || x[j] || x[k];
			}
		}
	}
	
	printf("%d", result);
	
	return 0;
}