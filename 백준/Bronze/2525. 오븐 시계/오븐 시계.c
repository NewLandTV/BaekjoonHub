#include <stdio.h>

int main(void)
{
	int a, b, c, result1, result2;
	
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	
	if (b + c < 60)
	{
		result1 = a;
		result2 = b + c;
	}
	else
	{
		result1 = a + (b + c) / 60;
		result2 = b + c - ((b + c) / 60 * 60);
	}
	
	if (result1 > 23)
	{
		result1 -= 24;
	}
	
	printf("%d %d", result1, result2);
	
	return 0;
}