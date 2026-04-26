#include <stdio.h>

int main(void)
{
	int i, j, k;
	int t;
	int n;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("#");
		
		for (i = 0; i < n - 2; i++)
		{
			printf(".");
		}
		
		printf("#\n");
		
		for (i = k = 0; i < n >> 1; i++)
		{
			printf("#");
			
			for (j = 0; j < n - 2; j++)
			{
				if (j == k || n - j - 3 == k)
				{
					printf("#");
				}
				else
				{
					printf(".");
				}
			}
			
			k++;
			
			printf("#\n");
		}
		
		for (i = 0; i < n >> 1; i++)
		{
			printf("#");
			
			for (j = 0; j < n - 2; j++)
			{
				printf(".");
			}
			
			printf("#\n");
		}
	}
	
	return 0;
}