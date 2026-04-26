#include <stdio.h>

int main(void)
{
	int x;
	
	scanf("%d", &x);
	printf("%d", (x + 1 >> 1) * 3 - (x >> 1) * 2);
	
	return 0;
}