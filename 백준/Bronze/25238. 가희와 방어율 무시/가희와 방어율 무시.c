#include <stdio.h>

int main(void)
{
	int a, b;
	float result;
	
	scanf("%d %d", &a, &b);
	
	if (a < 100 || b == 0)
	{
		printf("1");
		
		return 0;
	}
	
	result = a - a * (b / 100.0f);
	
	printf("%d", result < 100);
	
	return 0;
}