#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	
	while (1)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (a == 0 && b == 0 && c == 0 && d == 0)
		{
			break;
		}
		
		printf("%d %d\n", c - b, d - a);
	}
	
	return 0;
}