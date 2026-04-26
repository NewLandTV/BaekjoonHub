#include <stdio.h>

int main(void)
{
	int t;
	unsigned long long x;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%llu", &x);
		printf("%llu\n", x * 2 - 1);
	}
	
	return 0;
}