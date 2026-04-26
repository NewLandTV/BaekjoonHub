#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < n * n; j++)
		{
			printf("@");
			
			if ((j + 1) % n == 0)
			{
				printf("\n");
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n * 5; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	return 0;
}