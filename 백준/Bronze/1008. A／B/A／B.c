#include <stdio.h>

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%.32f", (double)a / b);
	
	return 0;
}