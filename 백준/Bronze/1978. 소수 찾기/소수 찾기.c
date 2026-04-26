#include <stdio.h>

int main(void)
{
	int n, number;
	int i, j, c;
	int count = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &number);
		
		for (j = 1, c = 0; j <= number; j++)
		{
			if (number % j == 0)
			{
				c++;
			}
		}
		
		if (c == 2)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}