#include <stdio.h>

int main(void)
{
	int m, n;
	int i, j, c;
	int sum = 0;
	int min;
	
	scanf("%d %d", &m, &n);
	
	for (i = m, min = n; i <= n; i++)
	{
		for (j = 1, c = 0; j <= i; j++)
		{
			if (i % j == 0)
			{
				c++;
			}
		}
		
		if (c == 2)
		{
			if (min > i)
			{
				min = i;
			}
			
			sum += i;
		}
	}
	
	if (sum == 0)
	{
		printf("-1");
		
		return 0;
	}
	
	printf("%d\n", sum);
	printf("%d", min);
	
	return 0;
}