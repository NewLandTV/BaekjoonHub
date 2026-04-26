#include <stdio.h>

int main(void)
{
	long long a, b, c;
	int x, y;
	
	scanf("%lld %lld %lld", &a, &b, &c);
	
	x = a * (double)b / c;
	y = (double)a / b * c;
	
	printf("%d", x > y ? x : y);
	
	return 0;
}