#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				fputc('*', stdout);
			}
			
			fputc('\n', stdout);
		}
	}
	
	return 0;
}