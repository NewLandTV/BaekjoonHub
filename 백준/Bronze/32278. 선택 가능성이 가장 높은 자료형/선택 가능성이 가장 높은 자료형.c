#include <stdio.h>

int main(void)
{
	long long n;
	
	scanf("%lld", &n);
	
	if (n >= -32768 && n <= 32767)
	{
		printf("short");
	}
	else if (n >= -2147483647 - 1 && n <= 2147483647)
	{
		printf("int");
	}
	else
	{
		printf("long long");
	}
	
	return 0;
}