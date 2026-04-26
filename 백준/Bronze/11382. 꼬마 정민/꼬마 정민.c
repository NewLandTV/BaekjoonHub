#include <stdio.h>

int main(void)
{
	unsigned long long a;
	unsigned long long b;
	unsigned long long c;
	
	scanf("%llu %llu %llu", &a, &b, &c);
	printf("%llu", a + b + c);
	
	return 0;
}