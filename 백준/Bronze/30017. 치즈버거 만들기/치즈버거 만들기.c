#include <stdio.h>

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if (a <= b)
	{
		printf("%d", a * 2 - 1);
		
		return 0;
	}
	
	printf("%d", b * 2 + 1);
	
	return 0;
}