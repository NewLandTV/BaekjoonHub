#include <stdio.h>

int main(void)
{
	long long a, b;
	long long temp;
	long long s;
	
	scanf("%lld %lld", &a, &b);
	
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	
	s = (a + b) * (a - b + 1) >> 1;
	
	printf("%lld", s);
	
	return 0;
}