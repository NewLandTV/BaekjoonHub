#include <stdio.h>

#define F(x) (((x) & 1 ? (x) << 1 : ((x) >> 1)) ^ 6)

int main(void)
{
	long long i;
	long long x, n;
	long long pattern[100000];
	int len = 0;
	
	scanf("%lld %lld", &x, &n);
	
	while (n--)
	{
		x = F(x);
		
		for (i = 0; i < len; i++)
		{
			if (pattern[i] == x)
			{
				i = -1;
				
				break;
			}
		}
		
		if (i == -1)
		{
			break;
		}
		
		pattern[len++] = x;
	}
	
	if (!~n)
	{
		printf("%lld", x);
		
		return 0;
	}
	
	for (len = 0, pattern[len++] = x, i = F(x); i ^ x; pattern[len++] = i, i = F(i));
	
	printf("%lld", pattern[(n + len) % len]);
	
	return 0;
}