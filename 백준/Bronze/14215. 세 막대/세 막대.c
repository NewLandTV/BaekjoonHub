#include <stdio.h>

int main(void)
{
	int a, b, c;
	int temp;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	
	printf("%d", a + b > c ? a + b + c : (a + b) * 2 - 1);
	
	return 0;
}