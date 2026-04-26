#include <stdio.h>

int main(void)
{
	unsigned int i;
	int x;
	unsigned int y;
	
	while (1)
	{
		scanf("%d", &x);
		
		if (x == -1)
		{
			break;
		}
		
		y = 0;
		
		for (i = 1; i <= x; i <<= 1)
		{
			if (x & i)
			{
				y += 2147483648 / i;
			}
		}
		
		printf("%u\n", y);
	}
	
	return 0;
}