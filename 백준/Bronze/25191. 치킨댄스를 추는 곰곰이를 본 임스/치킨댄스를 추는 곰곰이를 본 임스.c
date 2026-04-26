#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int n;
	int a, b;
	int c;
	
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	
	c = (a >> 1) + b;
	
	printf("%d", Min(n, c));
	
	return 0;
}