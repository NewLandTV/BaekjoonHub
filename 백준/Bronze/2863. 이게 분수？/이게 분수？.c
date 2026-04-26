#include <stdio.h>

int main(void)
{
	int a, b;
	int c, d;
	double x;
	double max = 0;
	int count;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	x = (double)a / c + (double)b / d;
	
	if (max < x)
	{
		max = x;
		count = 0;
	}
	
	x = (double)c / d + (double)a / b;
	
	if (max < x)
	{
		max = x;
		count = 1;
	}
	
	x = (double)d / b + (double)c / a;
	
	if (max < x)
	{
		max = x;
		count = 2;
	}
	
	x = (double)b / a + (double)d / c;
	
	if (max < x)
	{
		max = x;
		count = 3;
	}
	
	printf("%d", count);
	
	return 0;
}