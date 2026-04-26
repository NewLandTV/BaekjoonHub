#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int t;
	int n;
	double x, y;
	double minX, minY, maxX, maxY;
	double area, perimeter;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		
		minX = minY = 1000.0f;
		maxX = maxY = -1000.0f;
		
		while (n--)
		{
			scanf("%lf %lf", &x, &y);
			
			minX = Min(x, minX);
			minY = Min(y, minY);
			maxX = Max(x, maxX);
			maxY = Max(y, maxY);
		}
		
		area = (maxX - minX) * (maxY - minY);
		perimeter = (maxX - minX + maxY - minY) * 2.0f;
		
		printf("Case %d: Area %.9lf, Perimeter %.9lf\n", i, area, perimeter);
	}
	
	return 0;
}