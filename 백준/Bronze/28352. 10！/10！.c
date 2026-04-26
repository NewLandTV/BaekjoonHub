#include <stdio.h>

int main(void)
{
	int i;
	int n;
	unsigned long long f = 1;
	
	scanf("%d", &n);
	
	for (i = 2; i <= n; f *= i++);
	
	printf("%llu", f / 604800);
	
	return 0;
}