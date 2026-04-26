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
	
	if (n == 1)
	{
		return 0;
	}
	
	for (i = 1; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < i * 2 - 1; j++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	for (i = 0; i < n * 2 - 1; i++)
	{
		printf("*");
	}
	
	return 0;
}