#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, a, b, c, d;
	int x, y;
	
	scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
	
	x = ceil((double)n / a) * b;
	y = ceil((double)n / c) * d;
	
	printf("%d", x > y ? y : x);
	
	return 0;
}