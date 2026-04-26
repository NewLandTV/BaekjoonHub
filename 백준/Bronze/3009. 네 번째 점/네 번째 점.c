#include <stdio.h>

typedef struct _Point
{
	int x;
	int y;
} Point;

int main(void)
{
	Point a, b, c, d;
	
	scanf("%d %d", &a.x, &a.y);
	scanf("%d %d", &b.x, &b.y);
	scanf("%d %d", &c.x, &c.y);
	
	if (a.x == b.x)
	{
		d.x = c.x;
	}
	else if (b.x == c.x)
	{
		d.x = a.x;
	}
	else if (a.x == c.x)
	{
		d.x = b.x;
	}
	
	if (a.y == b.y)
	{
		d.y = c.y;
	}
	else if (b.y == c.y)
	{
		d.y = a.y;
	}
	else if (a.y == c.y)
	{
		d.y = b.y;
	}
	
	printf("%d %d", d.x, d.y);
	
	return 0;
}