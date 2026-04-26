#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = i; j < n; j++)
		{
			fputc('*', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = i; j <= n; j++)
		{
			fputc('*', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}