#include <stdio.h>

int main(void)
{
	int a, b, c;
	int x = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a + b == c)
	{
		x++;
	}
	
	if (a + c == b)
	{
		x++;
	}
	
	if (b + c == a)
	{
		x++;
	}
	
	printf("%d", x);
	
	return 0;
}