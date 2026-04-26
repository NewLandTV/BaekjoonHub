#include <stdio.h>

int main(void)
{
	int c1;
	int c, n;
	
	scanf("%d", &c1);
	
	for (c = c1, n = 1; c != 1; n++)
	{
		if (c & 1)
		{
			c = c * 3 + 1;
		}
		else
		{
			c >>= 1;
		}
	}
	
	printf("%d", n);
	
	return 0;
}