#include <stdio.h>

int main(void)
{
	int t;
	int a, b, c;
	int x, y, z;
	int count;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		count = 0;
		
		for (x = 1; x <= a; x++)
		{
			for (y = 1; y <= b; y++)
			{
				for (z = 1; z <= c; z++)
				{
					if (x % y == y % z && y % z == z % x)
					{
						count++;
					}
				}
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}