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
			putchar(' ');
		}
		
		for (j = i; j < n * 2 - i - 1; j++)
		{
			putchar('*');
		}
		
		putchar('\n');
	}
	
	return 0;
}