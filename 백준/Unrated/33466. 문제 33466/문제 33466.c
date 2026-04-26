#include <stdio.h>

int main(void)
{
	int t;
	long long n;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%lld", &n);
		printf("%lld\n", n + ((n >> 1) << 1));
	}
	
	return 0;
}