#include <stdio.h>

int main(void)
{
	long long k, n;
	long long x;
	
	scanf("%lld %lld", &k, &n);
	
	if (n == 1)
	{
		printf("-1");
		
		return 0;
	}
	
	x = k * n / (n - 1);
	
	if (k * n % (n - 1) != 0)
	{
		x++;
	}
	
	printf("%lld", x);
	
	return 0;
}