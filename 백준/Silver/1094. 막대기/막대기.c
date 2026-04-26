#include <stdio.h>

int main(void)
{
	int x;
	int count = 0;
	
	scanf("%d", &x);
	
	while (x > 0)
	{
		if (x >= 64)
		{
			count++;
			x -= 64;
		}
		else if (x >= 32)
		{
			count++;
			x -= 32;
		}
		else if (x >= 16)
		{
			count++;
			x -= 16;
		}
		else if (x >= 16)
		{
			count++;
			x -= 16;
		}
		else if (x >= 8)
		{
			count++;
			x -= 8;
		}
		else if (x >= 4)
		{
			count++;
			x -= 4;
		}
		else if (x >= 2)
		{
			count++;
			x -= 2;
		}
		else
		{
			count++;
			x--;
		}
	}
	
	printf("%d", count);
	
	return 0;
}