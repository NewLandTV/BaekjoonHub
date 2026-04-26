#include <stdio.h>

int main(void)
{
	long long n;
	
	scanf("%lld", &n);
	
	n = (n * n * 3) + (n * 5) + 2 >> 1;
	
	printf("%d", n % 45678);
	
	return 0;
}