#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, d;
	int p, q, r;
	int x;
	
	scanf("%d %d %d", &a, &b, &c);
	
	p = a;
	q = b * c * 2;
	r = a * (c * c - a * a + b * b);
	d = q * q - p * r * 4;
	
	if (d < 0)
	{
		printf("-1");
		
		return 0;
	}
	
	x = (-q + sqrt(d)) / (p * 2);
	
	printf("%d", x < 0 ? -1 : x);
	
	return 0;
}