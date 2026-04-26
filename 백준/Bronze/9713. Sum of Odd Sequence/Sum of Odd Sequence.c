#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	int sum;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		
		for (j = 1, sum = 0; j <= n; j += 2)
		{
			sum += j;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}