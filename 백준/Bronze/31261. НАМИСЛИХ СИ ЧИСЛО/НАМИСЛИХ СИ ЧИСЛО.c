#include <stdio.h>

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	printf("%d", a * a * (a + b + 1));
	
	return 0;
}