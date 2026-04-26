#include <stdio.h>

#define Abs(x) (x > 0 ? (x) : -(x))

int main(void)
{
	long long n, m;
	
	scanf("%lld %lld", &n, &m);
	printf("%lld", Abs(n - m));
	
	return 0;
}