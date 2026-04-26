#include <stdio.h>

int main(void)
{
	long long a, b, c, d;
	
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	printf("%lld", (c + d) / (a - b));
	
	return 0;
}