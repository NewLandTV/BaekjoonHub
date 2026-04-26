#include <stdio.h>
#include <stdlib.h>

typedef struct _Point
{
	int x;
	int y;
} Point;

int Compare(const void* a, const void* b);

int main(void)
{
	int i;
	int n;
	
	Point points[100000];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &points[i].x, &points[i].y);
	}
	
	qsort(points, n, sizeof(Point), Compare);
	
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", points[i].x, points[i].y);
	}
	
	return 0;
}

int Compare(const void* a, const void* b)
{
	Point p1 = *(Point*)a;
	Point p2 = *(Point*)b;
	
	if (p1.y > p2.y)
	{
		return 1;
	}
	
	if (p1.y < p2.y)
	{
		return -1;
	}
	
	if (p1.y == p2.y)
	{
		if (p1.x > p2.x)
		{
			return 1;
		}
		
		if (p1.x < p2.x)
		{
			return -1;
		}
	}
	
	return 0;
}