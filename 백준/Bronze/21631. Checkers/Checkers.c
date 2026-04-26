#include <stdio.h>

int main(void)
{
	long long a, b;
	
	scanf("%lld %lld", &a, &b);
	printf("%lld", a >= b ? b : a + 1);
	
	return 0;
}