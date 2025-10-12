#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	long long a, b, c;
	
	scanf("%lld %lld %lld", &a, &b, &c);
	
	if (b < a && c < a)
	{
		printf("%lld", Max(b, c));
	}
	else if (a < b && c < b)
	{
		printf("%lld", Max(a, c));
	}
	else
	{
		printf("%lld", Max(a, b));
	}
	
	return 0;
}