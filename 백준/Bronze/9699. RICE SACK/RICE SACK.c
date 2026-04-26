#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	int max;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		max = 0;
		
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &n);
			
			if (n > max)
			{
				max = n;
			}
		}
		
		printf("Case #%d: %d\n", i, max);
	}
	
	return 0;
}