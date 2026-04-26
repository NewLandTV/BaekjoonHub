#include <stdio.h>

int main(void)
{
	int i;
	int n, k;
	unsigned long long x = 1;
	
	scanf("%d %d", &n, &k);
	
	n--;
	k--;
	
	if (k == 0 || n == k)
	{
		printf("1");
		
		return 0;
	}
	if (k == 1)
	{
		printf("%d", n);
		
		return 0;
	}
	
	if (n >> 1 < k)
	{
		k = n - k;
	}
	
	for (i = n; i > n - k; x *= i, i--);
	for (i = k; i >= 1; x /= i--);
	
	printf("%llu", x);
	
	return 0;
}