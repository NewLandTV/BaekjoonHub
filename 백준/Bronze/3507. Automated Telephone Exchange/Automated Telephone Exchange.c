#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int c = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (n - i - j == 0)
			{
				c++;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}