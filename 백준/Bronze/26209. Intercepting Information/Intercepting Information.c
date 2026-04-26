#include <stdio.h>

int main(void)
{
	int i;
	int n;
	char c = 'S';
	
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &n);
		
		if (n == 9)
		{
			c = 'F';
		}
	}
	
	putchar(c);
	
	return 0;
}