#include <stdio.h>

int main(void)
{
	int n;
	long long x, prev = -1;
	long long j = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lld", &x);
		
		if (prev != -1)
		{
			j += (x - prev) * (x - prev);
		}
		
		prev = x;
	}
	
	printf("%lld", j);
	
	return 0;
}