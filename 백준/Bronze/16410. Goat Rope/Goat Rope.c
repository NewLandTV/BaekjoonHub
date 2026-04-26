#include <stdio.h>
#include <math.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

float GetDistanceFromLinear(int a, int b, int c, int x, int y);
float GetDistanceFromPoint(int x1, int y1, int x2, int y2);

int main(void)
{
	int x, y, x1, y1, x2, y2;
	float d = 10000;
	
	scanf("%d %d %d %d %d %d", &x, &y, &x1, &y1, &x2, &y2);
	
	d = Min(GetDistanceFromPoint(x, y, x1, y1), d);
	d = Min(GetDistanceFromPoint(x, y, x1, y2), d);
	d = Min(GetDistanceFromPoint(x, y, x2, y1), d);
	d = Min(GetDistanceFromPoint(x, y, x2, y2), d);
	
	if (y1 <= y && y <= y2)
	{
		d = Min(GetDistanceFromLinear(1, 0, -x1, x, y), d);
		d = Min(GetDistanceFromLinear(1, 0, -x2, x, y), d);
	}
	if (x1 <= x && x <= x2)
	{
		d = Min(GetDistanceFromLinear(0, 1, -y1, x, y), d);
		d = Min(GetDistanceFromLinear(0, 1, -y2, x, y), d);
	}
	
	printf("%.3f", d);
	
	return 0;
}

float GetDistanceFromLinear(int a, int b, int c, int x, int y)
{
	return abs(a * x + b * y + c) / sqrt(a * a + b * b);
}

float GetDistanceFromPoint(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}