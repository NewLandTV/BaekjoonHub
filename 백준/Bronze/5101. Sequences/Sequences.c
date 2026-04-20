#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		
		if ((c - a) % b != 0 || (c - a) / b < 0)
		{
			printf("X\n");
		}
		else
		{
			printf("%d\n", (c - a) / b + 1);
		}
	}
	
	return 0;
}