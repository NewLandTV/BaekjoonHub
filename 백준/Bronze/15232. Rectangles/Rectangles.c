#include <stdio.h>

int main(void)
{
	int i, j;
	int r, c;
	
	scanf("%d", &r);
	scanf("%d", &c);
	
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			putchar('*');
		}
		
		putchar('\n');
	}
	
	return 0;
}