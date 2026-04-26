#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int n;
	int x, y;
	int min = 1000000000, max = -1000000000;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &x, &y);
		
		min = Min(y, min);
		max = Max(y, max);
	}
	
	printf("%d", max - min);
	
	return 0;
}