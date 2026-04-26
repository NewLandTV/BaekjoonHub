#include <stdio.h>

int main(void)
{
	int n;
	int i, j, c;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		c = i * 2 + 1;
		
		for (j = 0; j < n - i - 1; j++)
		{
			putchar(' ');
		}
		
		for (j = 0; j < n * 2 - 1 && j < c; j++)
		{
			putchar('*');
		}
		
		putchar('\n');
	}
	
	for (i = n - 2; i >= 0; i--)
	{
		c = i * 2 + 1;
		
		for (j = 0; j < n - i - 1; j++)
		{
			putchar(' ');
		}
		
		for (j = 0; j < n * 2 - 1 && j < c; j++)
		{
			putchar('*');
		}
		
		putchar('\n');
	}
	
	return 0;
}