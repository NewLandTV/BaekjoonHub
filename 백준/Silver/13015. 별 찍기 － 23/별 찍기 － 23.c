#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	
	for (i = 0; i < (n - 1) * 2 - 1; i++)
	{
		printf(" ");
	}
	
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	
	printf("\n");
	
	for (i = 0; i < n - 2; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < n - 2; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < (n - 3) * 2 - (i * 2) + 1; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < n - 2; j++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	for (i = 0; i < n - 1; i++)
	{
		printf(" ");
	}
	
	printf("*");
	
	for (i = 0; i < n - 2; i++)
	{
		printf(" ");
	}
	
	printf("*");
	
	for (i = 0; i < n - 2; i++)
	{
		printf(" ");
	}
	
	printf("*\n");
	
	for (i = n - 3; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < n - 2; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < (n - 3) * 2 - (i * 2) + 1; j++)
		{
			printf(" ");
		}
		
		printf("*");
		
		for (j = 0; j < n - 2; j++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	
	for (i = 0; i < (n - 1) * 2 - 1; i++)
	{
		printf(" ");
	}
	
	for (i = 0; i < n; i++)
	{
		printf("*");
	}
	
	return 0;
}