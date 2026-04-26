#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", Max(b - a, c - b) - 1);
	
	return 0;
}