#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int sum;
	int result = 1;
	
	scanf("%d", &n);
	
	for (i = 1; n > i; i++)
	{
		sum = 0;
		j = i;
		
		while (n > sum)
		{
			sum += j;
			
			if (n == sum)
			{
				result++;
				
				continue;
			}
			
			j++;
		}
	}
	
	printf("%d", result);
	
	return 0;
}