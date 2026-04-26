#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f;
	int x, y;
	
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	for (y = -999; y <= 999; y++)
	{
		for (x = -999; x <= 999; x++)
		{
			if (a * x + b * y == c && d * x + e * y == f)
			{
				printf("%d %d", x, y);
				
				return 0;
			}
		}
	}
	
	return 0;
}