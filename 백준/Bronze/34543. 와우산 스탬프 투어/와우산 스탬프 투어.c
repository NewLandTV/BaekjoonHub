#include <stdio.h>

int main(void)
{
	int n;
	int w;
	int x;
	
	scanf("%d", &n);
	scanf("%d", &w);
	
	x = n * 10;
	
	if (n >= 3)
	{
		x += 20;
	}
	if (n == 5)
	{
		x += 50;
	}
	if (w > 1000)
	{
		x -= 15;
	}
	
	if (x > 0)
	{
		printf("%d", x);
	}
	else
	{
		printf("0");
	}
	
	return 0;
}