#include <stdio.h>

int main(void)
{
	int n, a, b;
	int x = 1, y = 1;
	int temp;
	
	scanf("%d %d %d", &n, &a, &b);
	
	while (n--)
	{
		x += a;
		y += b;
		
		if (x < y)
		{
			temp = x;
			x = y;
			y = temp;
		}
		else if (x == y)
		{
			y--;
		}
	}
	
	printf("%d %d", x, y);
	
	return 0;
}