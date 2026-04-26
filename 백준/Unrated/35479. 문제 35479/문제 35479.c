#include <stdio.h>

double Max(double x, double y, double z);

int main(void)
{
	double r, g, b;
	double c, m, y, k;
	
	scanf("%lf %lf %lf", &r, &g, &b);
	
	r /= 255;
	g /= 255;
	b /= 255;
	k = 1 - Max(r, g, b);
	c = (1 - r - k) / (1 - k);
	m = (1 - g - k) / (1 - k);
	y = (1 - b - k) / (1 - k);
	
	if (k == 1)
	{
		c = m = y = 0;
	}
	
	printf("%.9lf %.9lf %.9lf %.9lf", c, m, y, k);
	
	return 0;
}

double Max(double x, double y, double z)
{
	double max = x;
	
	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}
	
	return max;
}