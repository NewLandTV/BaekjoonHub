#include <stdio.h>

int main(void)
{
	int n, c;
	int sx, sy;
	int x, y;
	
	scanf("%d %d", &n, &c);
	
	sx = n;
	sy = n;
	
	while (c--)
	{
		scanf("%d %d", &x, &y);
		
		if (x > sx || y > sy)
		{
			continue;
		}
		
		if (x * sy >= sx * y)
		{
			sx = x;
		}
		else
		{
			sy = y;
		}
	}
	
	printf("%d", sx * sy);
	
	return 0;
}