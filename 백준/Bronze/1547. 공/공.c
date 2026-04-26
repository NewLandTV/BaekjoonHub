#include <stdio.h>

int main(void)
{
	int m;
	int x, y;
	int current = 1;
	
	for (scanf("%d", &m); m > 0; m--)
	{
		scanf("%d %d", &x, &y);
		
		if (x == current)
		{
			current = y;
		}
		else if (y == current)
		{
			current = x;
		}
	}
	
	printf("%d", current);
	
	return 0;
}