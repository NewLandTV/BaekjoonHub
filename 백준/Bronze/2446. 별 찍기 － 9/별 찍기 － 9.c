#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = i; j < n * 2 - i - 1; j++)
		{
			fputc('*', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	for (i = n - 2; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = i; j < n * 2 - i - 1; j++)
		{
			fputc('*', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}