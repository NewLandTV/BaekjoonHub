#include <stdio.h>

int main(void)
{
	long long int n;
	
	scanf("%lld", &n);
	printf("%lld\n", (n - 2) * (n - 1) * n / 6);
	printf("3");
	
	return 0;
}