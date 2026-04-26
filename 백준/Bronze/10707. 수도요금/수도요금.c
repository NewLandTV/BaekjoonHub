#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int p;
	int x, y;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);
	
	x = a * p;
	y = p <= c ? b : b + (p - c) * d;
	
	printf("%d", x < y ? x : y);
	
	return 0;
}