#include <stdio.h>

#define LIMIT 200000000

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int x, y;
	int maxK1 = -LIMIT, minK1 = LIMIT;
	int maxK2 = -LIMIT, minK2 = LIMIT;
	int maxY = -LIMIT, minY = LIMIT;
	int h1, h2;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		maxK1 = Max(x + y, maxK1);
		minK1 = Min(x + y, minK1);
		maxK2 = Max(y - x, maxK2);
		minK2 = Min(y - x, minK2);
		maxY = Max(y, maxY);
		minY = Min(y, minY);
		
		h1 = (maxK1 + maxK2) - minY * 2;
		h2 = maxY * 2 - (minK1 + minK2);
	}
	
	printf("%d", Min(h1, h2));
	
	return 0;
}