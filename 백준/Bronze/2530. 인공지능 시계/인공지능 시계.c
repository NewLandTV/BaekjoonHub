#include <stdio.h>

int main(void)
{
	int a, b, c;
	int d;
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	
	c += d % 60;
	
	if (c >= 60)
	{
		c %= 60;
		b++;
	}
	
	for (b += d / 60; b >= 60; b -= 60)
	{
		a++;
		a %= 24;
	}
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}