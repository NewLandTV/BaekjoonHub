#include <stdio.h>

int main(void)
{
	long long k;
	long long a, b, c, d;
	long long r1, r2;
	
	scanf("%lld", &k);
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
	r1 = a * k + b;
	r2 = c * k + d;
	
	if (r1 == r2)
	{
		printf("Yes %lld", r1);
	}
	else
	{
		printf("No");
	}
	
	return 0;
}