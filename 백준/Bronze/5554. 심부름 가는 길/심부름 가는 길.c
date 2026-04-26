#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int x, y;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	y = a + b + c + d;
	x = y / 60;
	y %= 60;
	
	printf("%d\n", x);
	printf("%d", y);
	
	return 0;
}