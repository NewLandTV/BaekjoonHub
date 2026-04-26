#include <stdio.h>

#define MOD 1000000007
#define LIMIT 1l << 60

int main(void)
{
	int n;
	long long b;
	long long c = 1;
	int h = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lld", &b);
		
		c = c * 2 - b;
		
		if (c >= LIMIT)
		{
			h = 1;
		}
		
		if (h)
		{
			c = (c + MOD) % MOD;
		}
		else if (c < 0)
		{
			printf("error");
			
			return 0;
		}
	}
	
	printf("%lld", (c + MOD) % MOD);
	
	return 0;
}