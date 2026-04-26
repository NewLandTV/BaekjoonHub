#include <stdio.h>

int main(void)
{
	long long n, r;
	
	scanf("%lld %lld", &n, &r);
	printf("%lld", n + r * 2 - 1);
	
	return 0;
}