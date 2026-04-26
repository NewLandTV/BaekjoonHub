#include <stdio.h>

int main(void)
{
	int a;
	float x;
	
	scanf("%d", &a);
	
	x = 100.0f / a;
	
	printf("%f\n", x);
	
	x = 100.0f / (100 - a);
	
	printf("%f", x);
	
	return 0;
}