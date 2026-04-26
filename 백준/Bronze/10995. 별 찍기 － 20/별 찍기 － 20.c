#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		if (i & 1)
		{
			printf(" ");
		}
		
		for (j = 0; j < n; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}