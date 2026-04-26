#include <stdio.h>

int IsPrime(long long n)
{
	if (n < 2)
	{
		return 0;
	}
	
	if (n < 4)
	{
		return 1;
	}
	
	if (n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	
	long long i;
	
	for (i = 5; i * i <= n; i++)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int main(void)
{
	long long i, j;
	int t;
	long long n;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		for (scanf("%lld", &n); !IsPrime(n); n++);
		
		printf("%lld\n", n);
	}
	
	return 0;
}