#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && b == c && a == c)
	{
		fputc('2', stdout);
		
		return 0;
	}
	
	if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
	{
		fputc('1', stdout);
		
		return 0;
	}
	
	fputc('0', stdout);
	
	return 0;
}