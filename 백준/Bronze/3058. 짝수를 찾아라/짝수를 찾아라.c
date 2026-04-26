#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int x;
	int sum = 0;
	int min = 100;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		for (i = 0; i < 7; i++)
		{
			scanf("%d", &x);
			
			if (x & 1)
			{
				continue;
			}
			
			sum += x;
			
			if (min > x)
			{
				min = x;
			}
		}
		
		printf("%d %d\n", sum, min);
		
		sum = 0;
		min = 100;
	}
	
	return 0;
}