#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
	unsigned int a, b;
	
	scanf("%u %u", &a, &b);
	printf("%u", a & 1 && b & 1 ? Min(a, b) : 0);
	
	return 0;
}