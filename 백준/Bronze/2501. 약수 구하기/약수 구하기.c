#include <stdio.h>

int main(void)
{
	int n, k;
	int i;
	int min;
	
	scanf("%d %d", &n, &k);
	
	for (i = n, min = 0; i > 0 && k > 0; i--)
	{
		if (n % i == 0 && min != n / i)
		{
			min = n / i;
			k--;
		}
	}
	
	if (k > 0)
	{
		min = 0;
	}
	
	printf("%d", min);
	
	return 0;
}