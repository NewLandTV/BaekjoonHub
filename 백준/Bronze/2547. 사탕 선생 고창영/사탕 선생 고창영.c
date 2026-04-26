#include <stdio.h>

int main(void)
{
	int i;
	int t, n;
	unsigned long long x;
	unsigned long long sum;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (i = 0, sum = 0; i < n; i++)
		{
			scanf("%llu", &x);
			
			sum += x % n;
			sum %= n;
		}
		
		printf("%s\n", sum == 0 ? "YES" : "NO");
	}
	
	return 0;
}