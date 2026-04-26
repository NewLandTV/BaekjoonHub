#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int x, y;
	int minX = 10000, minY = 10000;
	int maxX = -10000, maxY = -10000;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		if (minX > x)
		{
			minX = x;
		}
		if (maxX < x)
		{
			maxX = x;
		}
		if (minY > y)
		{
			minY = y;
		}
		if (maxY < y)
		{
			maxY = y;
		}
	}
	
	printf("%d", (maxX - minX) * (maxY - minY));
	
	return 0;
}