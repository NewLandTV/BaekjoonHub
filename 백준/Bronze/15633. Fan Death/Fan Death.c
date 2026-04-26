#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int sum = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	printf("%d", sum * 5 - 24);
	
	return 0;
}