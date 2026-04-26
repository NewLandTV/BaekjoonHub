#include <stdio.h>

int main(void)
{
	int n, k, a, b;
	int x, y;
	
	scanf("%d %d %d %d", &n, &k, &a, &b);
	
	x = (k - 1) * b + (n - 1) * b;
	y = (n - 1) * a;
	
	printf("%d %d", x, y);
	
	return 0;
}