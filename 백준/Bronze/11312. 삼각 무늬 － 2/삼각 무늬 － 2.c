#include <stdio.h>
#include <math.h>

int main(void)
{
	int t;
	long long a, b;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", (long long)ceil((double)(a * a) / (b * b)));
	}
	
	return 0;
}