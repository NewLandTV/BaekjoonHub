#include <stdio.h>

int main(void)
{
	int i, j;
	int c, r;
	int k;
	int x = 1, y = 1;
	
	scanf("%d %d", &c, &r);
	scanf("%d", &k);
	
	if (c * r < k)
	{
		printf("0");
		
		return 0;
	}
	
	for (i = 0; k > 1;)
	{
		if (i > 2)
		{
			r--;
		}
		
		for (i++, j = 0; j < r - 1 && k > 1; j++)
		{
			k--;
			y++;
		}
		
		if (i > 2)
		{
			c--;
		}
		
		for (i++, j = 0; j < c - 1 && k > 1; j++)
		{
			k--;
			x++;
		}
		
		if (i > 2)
		{
			r--;
		}
		
		for (i++, j = 0; j < r - 1 && k > 1; j++)
		{
			k--;
			y--;
		}
		
		if (i > 2)
		{
			c--;
		}
		
		for (i++, j = 0; j < c - 1 && k > 1; j++)
		{
			k--;
			x--;
		}
	}
	
	printf("%d %d", x, y);
	
	return 0;
}