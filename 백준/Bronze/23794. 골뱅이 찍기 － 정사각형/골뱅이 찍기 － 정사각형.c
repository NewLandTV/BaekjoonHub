#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n + 2; i++)
	{
		printf("@");
	}
	
	printf("\n");
	
	for (i = 0; i < n; i++)
	{
		printf("@");
		
		for (j = 0; j < n; j++)
		{
			printf(" ");
		}
		
		printf("@\n");
	}
	
	for (i = 0; i < n + 2; i++)
	{
		printf("@");
	}
	
	return 0;
}