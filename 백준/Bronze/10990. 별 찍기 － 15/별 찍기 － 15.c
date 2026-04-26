#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	
	printf("*\n");
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 2; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j <= i * 2; j++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	return 0;
}