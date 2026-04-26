#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		
		if (i % 6 == 0)
		{
			printf("Go! ");
			
			if (i == n)
			{
				return 0;
			}
		}
	}
	
	printf("Go!");
	
	return 0;
}