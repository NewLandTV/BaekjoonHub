#include <stdio.h>

#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int n, h, v;
	
	scanf("%d %d %d", &n, &h, &v);
	printf("%d", Max(n - h, h) * Max(n - v, v) * 4);
	
	return 0;
}