#include <stdio.h>

int main(void)
{
	int x, i, j;
	int t;
	int n;
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		scanf("%d", &n);
		printf("Case %d:\n", x);
		
		for (i = 1; i <= 6; i++)
		{
			for (j = i; j <= 6; j++)
			{
				if (i + j == n)
				{
					printf("(%d,%d)\n", i, j);
				}
			}
		}
	}
	
	return 0;
}