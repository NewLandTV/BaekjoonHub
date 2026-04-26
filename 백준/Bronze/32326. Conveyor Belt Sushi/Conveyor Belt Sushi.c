#include <stdio.h>

int main(void)
{
	int r;
	int g;
	int b;
	
	scanf("%d", &r);
	scanf("%d", &g);
	scanf("%d", &b);
	printf("%d", r * 3 + g * 4 + b * 5);
	
	return 0;
}