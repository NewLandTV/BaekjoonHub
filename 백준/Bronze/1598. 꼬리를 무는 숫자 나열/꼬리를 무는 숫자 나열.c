#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	a--;
	b--;
	
	printf("%d", Abs((a >> 2) - (b >> 2)) + Abs(a % 4 - b % 4));
	
	return 0;
}