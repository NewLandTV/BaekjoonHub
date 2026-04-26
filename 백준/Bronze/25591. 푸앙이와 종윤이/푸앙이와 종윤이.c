#include <stdio.h>

int main(void)
{
	int n1, n2;
	int a, b, c, d;
	int q, r;
	
	scanf("%d %d", &n1, &n2);
	
	a = 100 - n1;
	b = 100 - n2;
	c = 100 - (a + b);
	d = a * b;
	q = d / 100;
	r = d % 100;
	
	printf("%d %d %d %d %d %d\n", a, b, c, d, q, r);
	
	if (d >= 100)
	{
		printf("%d %d", c + q, r);
	}
	else
	{
		printf("%d %d", c, d);
	}
	
	return 0;
}