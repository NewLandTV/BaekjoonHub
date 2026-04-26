#include <stdio.h>

int main(void)
{
	int x, y;
	int n;
	
	scanf("%d", &n);
	
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n * 2; x++)
		{
			if (x <= y || x >= n * 2 - y - 1)
			{
				fputc('*', stdout);
			}
			else
			{
				fputc(' ', stdout);
			}
		}
		
		fputc('\n', stdout);
	}
	
	for (y = n - 2; y >= 0; y--)
	{
		for (x = 0; x < n * 2; x++)
		{
			if (x <= y || x >= n * 2 - y - 1)
			{
				fputc('*', stdout);
			}
			else
			{
				fputc(' ', stdout);
			}
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}