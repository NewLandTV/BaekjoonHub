#include <stdio.h>

int main(void)
{
	int a, b;
	int c, d;
	int target;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	target = (a + b - 1) % 4;
	target = (target + c + d - 1) % 4;
	
	printf("%d", target + 1);
	
	return 0;
}