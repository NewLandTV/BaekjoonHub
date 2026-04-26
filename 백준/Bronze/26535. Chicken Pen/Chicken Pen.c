#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int size = 1;
	
	for (scanf("%d", &n); size * size < n; size++);
	
	for (i = 0; i < size + 2; i++)
	{
		fputc('x', stdout);
	}
	
	fputc('\n', stdout);
	
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size + 2; j++)
		{
			if (j == 0 || j == size + 1)
			{
				fputc('x', stdout);
			}
			else
			{
				fputc('.', stdout);
			}
		}
		
		fputc('\n', stdout);
	}
	
	for (i = 0; i < size + 2; i++)
	{
		fputc('x', stdout);
	}
	
	return 0;
}