#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	int minDistance = 1000;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if (minDistance > w - x)
	{
		minDistance = w - x;
	}
	if (minDistance > x)
	{
		minDistance = x;
	}
	if (minDistance > h - y)
	{
		minDistance = h - y;
	}
	if (minDistance > y)
	{
		minDistance = y;
	}
	
	printf("%d", minDistance);
	
	return 0;
}