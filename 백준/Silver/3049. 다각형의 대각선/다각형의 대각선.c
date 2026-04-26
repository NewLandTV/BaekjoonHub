#include <stdio.h>

int main(void)
{
	int n;
	int c;
	
	scanf("%d", &n);
	
	c = n * (n - 1) * (n - 2) * (n - 3) / 24;
	
	printf("%d", c);
	
	return 0;
}