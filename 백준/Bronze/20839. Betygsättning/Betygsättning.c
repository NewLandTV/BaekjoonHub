#include <stdio.h>

int main(void)
{
	int x, y, z;
	int a, b, c;
	
	scanf("%d %d %d", &x, &y, &z);
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == x && b == y && c == z)
	{
		printf("A");
	}
	else if (a >= (x + 1) >> 1 && b == y && c == z)
	{
		printf("B");
	}
	else if (b == y && c == z)
	{
		printf("C");
	}
	else if (b >= (y + 1) >> 1 && c == z)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	
	return 0;
}