#include <stdio.h>

int main(void)
{
	int i, j;
	int n[10];
	int sum;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = sum = 0; j < 10; j++)
		{
			if (i == j)
			{
				continue;
			}
			
			sum += n[j];
		}
		
		if (sum == n[i])
		{
			printf("%d", sum);
			
			return 0;
		}
	}
	
	return 0;
}