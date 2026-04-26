#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d", a * 1000 + b * 10000);
	
	return 0;
}