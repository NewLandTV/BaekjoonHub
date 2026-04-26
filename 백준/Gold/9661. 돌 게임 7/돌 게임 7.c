#include <stdio.h>

int main(void)
{
	long long n;
	
	scanf("%lld", &n);	
	printf("%s", n % 5 && n % 5 != 2 ? "SK" : "CY");
	
	return 0;
}