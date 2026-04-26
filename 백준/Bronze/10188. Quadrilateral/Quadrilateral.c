#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int a, b;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &a, &b);
		
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < a; j++)
			{
				printf("X");
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}