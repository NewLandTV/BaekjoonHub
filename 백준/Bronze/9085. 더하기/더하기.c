#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int x;
	int sum;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d", &n);
		
		for (i = 0, sum = 0; i < n; i++)
		{
			scanf("%d", &x);
			
			sum += x;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}