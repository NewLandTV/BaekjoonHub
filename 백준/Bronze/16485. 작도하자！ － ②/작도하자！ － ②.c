#include <stdio.h>

int main(void)
{
	int c, b;
	
	scanf("%d %d", &c, &b);
	printf("%.6f", (float)c / b);
	
	return 0;
}