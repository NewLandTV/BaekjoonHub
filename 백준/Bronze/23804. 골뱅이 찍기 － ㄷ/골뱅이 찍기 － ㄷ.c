#include <stdio.h>

int main(void)
{
	int i, j, k;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("@@@@@");
		}
		
		printf("\n");
	}
	
	for (i = 0; i < n * 3; i++)
	{
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
			printf("@@@@@");
		}
		
		printf("\n");
	}
	
	return 0;
}