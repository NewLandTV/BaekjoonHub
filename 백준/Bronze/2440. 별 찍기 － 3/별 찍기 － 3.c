#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		for (i = 0; i < n; i++)
		{
			putchar('*');
		}
		
		putchar('\n');
	}
	
	return 0;
}