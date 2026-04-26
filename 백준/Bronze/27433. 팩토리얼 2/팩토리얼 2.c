#include <stdio.h>

int main(void)
{
	int n;
	unsigned long long x = 1;
		
	for (scanf("%d", &n); n >= 1; n--)
	{
		x *= n;
	}
	
	printf("%llu", x);
	
	return 0;
}