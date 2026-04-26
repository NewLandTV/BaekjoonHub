#include <stdio.h>

int main(void)
{
	int a, b;
	int r;
	int digit = 1;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	r = a + b;
	
	while (r >= 10)
	{
		r /= 10;
		digit++;
	}
	
	printf("%d", digit);
	
	return 0;
}