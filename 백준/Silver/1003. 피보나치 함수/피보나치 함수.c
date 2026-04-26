#include <stdio.h>

int main(void)
{
	int i, j;
	int t, n;
	int zero, one, temp;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			printf("1 0\n");
			
			continue;
		}
		else if (n == 1)
		{
			printf("0 1\n");
			
			continue;
		}
		
		for (j = 0, zero = 0, one = 1; j < n; j++)
		{
			temp = zero + one;
			
			if (j == n - 1)
			{
				break;
			}
			
			zero = one;
			one = temp;
		}
		
		printf("%d %d\n", zero, one);
	}
	
	return 0;
}