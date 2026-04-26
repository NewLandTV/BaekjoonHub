#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int s = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &e);
	
	if (a < 0)
	{
		s = a * c * -1;
		s += d;
		s += b * e;
	}
	else
	{
		s = (b - a) * e;
	}
	
	printf("%d", s);
	
	return 0;
}