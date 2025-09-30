#include <stdio.h>

int main(void)
{
	int a, b;
	int diff;
	
	while (1)
	{
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0)
		{
			break;
		}
		
		diff = a - b;
		
		if (diff < 2)
		{
			printf("0 0\n");
		}
		else if (diff & 1)
		{
			printf("%d 1\n", diff - 3 >> 1);
		}
		else
		{
			printf("%d 0\n", diff >> 1);
		}
	}
	
	return 0;
}