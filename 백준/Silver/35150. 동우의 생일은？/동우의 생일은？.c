#include <stdio.h>

int main(void)
{
	int t;
	int a, b, n;
	int x, y;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d %d", &a, &b, &n);
		
		x = n >> 1;
		y = (n + 1) >> 1;
		
		printf("%lld\n", (long long)(a * x + b * y) * (a * y + b * x));
	}
	
	return 0;
}