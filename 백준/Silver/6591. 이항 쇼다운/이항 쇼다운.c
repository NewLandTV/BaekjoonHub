#include <stdio.h>

int Combination(int n, int k);

int main(void)
{
	int n, k;
	
	while (1)
	{
		scanf("%d %d", &n, &k);
		
		if (n == 0 && k == 0)
		{
			break;
		}
		
		printf("%d\n", Combination(n, k));
	}
	
	return 0;
}

int Combination(int n, int k)
{
	int i;
	long long x;
	
	if (k > n >> 1)
	{
		k = n - k;
	}
	
	for (i = x = 1; i <= k; i++)
	{
		x = x * (n - i + 1) / i;
	}
	
	return x;
}