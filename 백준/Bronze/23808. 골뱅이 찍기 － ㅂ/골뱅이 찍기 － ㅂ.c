#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n * 2; i++)
	{
		for (j = 0; j < n; j++)
		{
			fputc('@', stdout);
		}
		
		for (j = 0; j < n * 3; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = 0; j < n; j++)
		{
			fputc('@', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n * 5; j++)
		{
			fputc('@', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			fputc('@', stdout);
		}
		
		for (j = 0; j < n * 3; j++)
		{
			fputc(' ', stdout);
		}
		
		for (j = 0; j < n; j++)
		{
			fputc('@', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n * 5; j++)
		{
			fputc('@', stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}