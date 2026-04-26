#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a * b == c * d)
	{
		printf("E");
		
		return 0;
	}
	
	printf("%c", a * b > c * d ? 'M' : 'P');
	
	return 0;
}