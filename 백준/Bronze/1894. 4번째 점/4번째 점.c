#include <stdio.h>

int main(void)
{
	double ax, ay, bx, by, cx, cy, dx, dy;
	double x, y;
	
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy) == 8)
	{
		if (ax == cx && ay == cy)
		{
			x = bx + dx - ax;
			y = by + dy - ay;
		}
		else if (ax == dx && ay == dy)
		{
			x = bx + cx - ax;
			y = by + cy - ay;
		}
		else if (bx == cx && by == cy)
		{
			x = ax + dx - bx;
			y = ay + dy - by;
		}
		else if (bx == dx && by == dy)
		{
			x = ax + cx - bx;
			y = ay + cy - by;
		}
		
		printf("%.3lf %.3lf\n", x, y);
	}
	
	return 0;
}