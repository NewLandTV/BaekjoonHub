#include <stdio.h>

int main(void)
{
	unsigned long long n, m;
	
	scanf("%llu %llu", &n, &m);
	printf("%llu", n * m >> 1);
	
	return 0;
}