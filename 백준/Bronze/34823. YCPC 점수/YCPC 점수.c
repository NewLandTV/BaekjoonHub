#include <stdio.h>

int Min(int a, int b, int c);

int main(void)
{
	int y, c, p;
	
	scanf("%d %d %d", &y, &c, &p);
	printf("%d", Min(y, c >> 1, p));
	
	return 0;
}

int Min(int a, int b, int c)
{
	int min = a;
	
	if (min > b)
	{
		min = b;
	}
	
	if (min > c)
	{
		min = c;
	}
	
	return min;
}