#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int a, b, c, x, y;
	int price;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
	
	c *= 2;
	
	if (a + b < c)
	{
		price = a * x + b * y;
	}
	else
	{
		price = c * Min(x, y) + Min(a, c) * Max(0, x - y) + Min(b, c) * Max(0, y - x);
	}
	
	printf("%d", price);
	
	return 0;
}