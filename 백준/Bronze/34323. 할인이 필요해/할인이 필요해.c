#include <stdio.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	long long n, m, s;
	long long a, b;
	
	scanf("%lld %lld %lld", &n, &m, &s);
	
	a = s * (m + 1) * (100 - n) / 100;
	b = s * m;
	
	printf("%lld", Min(a, b));
	
	return 0;
}