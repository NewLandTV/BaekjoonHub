#include <stdio.h>

int main(void)
{
	int i;
	long long a, b;
	int maxCommonDivisor;
	
	scanf("%lld %lld", &a, &b);
	
	for (i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			maxCommonDivisor = i;
		}
	}
	
	printf("%lld\n", a * b / maxCommonDivisor);
	
	return 0;
}