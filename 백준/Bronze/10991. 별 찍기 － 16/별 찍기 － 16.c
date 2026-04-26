#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = 0; j <= i; j++)
		{
			printf("* ");
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}