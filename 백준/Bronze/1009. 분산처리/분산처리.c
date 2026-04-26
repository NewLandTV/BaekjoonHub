#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int a, b;
	int x;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d", &a, &b);
		
		x = a;
		b = b % 4 + 4;
		
		for (i = 2; i <= b; i++)
		{
			x = x * a % 10;
		}
		
		if (x == 0)
		{
			x = 10;
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}