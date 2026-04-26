#include <stdio.h>

int main(void)
{
	int a1, a2, a3;
	int x, y, z;
	int min = 2147483647;
	
	scanf("%d %d %d", &a1, &a2, &a3);
	
	x = a2 * 2 + a3 * 4;
	y = a1 * 2 + a3 * 2;
	z = a1 * 4 + a2 * 2;
	
	if (min > x)
	{
		min = x;
	}
	if (min > y)
	{
		min = y;
	}
	if (min > z)
	{
		min = z;
	}
	
	printf("%d", min);
	
	return 0;
}