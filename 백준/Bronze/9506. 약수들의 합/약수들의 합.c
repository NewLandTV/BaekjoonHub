#include <stdio.h>

int main(void)
{
	int n;
	int i, sum;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == -1)
		{
			break;
		}
		
		for (i = n - 1, sum = 1; i > 0; i--)
		{
			if (n % i == 0 && n != n / i)
			{
				sum += n / i;
			}
		}
		
		if (sum != n)
		{
			printf("%d is NOT perfect.\n", n);
			
			continue;
		}
		
		printf("%d = %d", n, 1);
		
		for (i = n - 1, sum = 0; i > 0; i--)
		{
			if (n % i == 0 && n != n / i)
			{
				sum += n / i;
				
				printf(" + %d", n / i);
			}
		}
		
		putchar('\n');
	}
	
	return 0;
}