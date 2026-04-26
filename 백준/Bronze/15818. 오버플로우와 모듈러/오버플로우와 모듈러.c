#include <stdio.h>

int main(void)
{
	int n, m;
	int a;
	long long x = 1;
	
	scanf("%d %d", &n, &m);
	
	while (n--)
	{
		scanf("%d", &a);
		
		x *= a;
		x %= m;
	}
	
	printf("%lld", x % m);
	
	return 0;
}