#include <stdio.h>

int main(void)
{
	int i;
	int t;
	unsigned long long n;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%llu", &n);
		printf("%llu\n", n * n);
	}
	
	return 0;
}