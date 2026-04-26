#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		for (j = 0; j < n * 3; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		for (j = 0; j < n * 2; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n * 3; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		for (j = 0; j < n * 2; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		for (j = 0; j < n * 3; j++)
		{
			printf(" ");
		}
		
		for (j = 0; j < n; j++)
		{
			printf("@");
		}
		
		printf("\n");
	}
	
	return 0;
}