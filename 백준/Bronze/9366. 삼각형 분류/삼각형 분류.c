#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int a, b, c;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		printf("Case #%d: ", i);
		
		if (a == b && b == c)
		{
			printf("equilateral\n");
		}
		else if (a + b <= c || b + c <= a || a + c <= b)
		{
			printf("invalid!\n");
		}
		else if (a != b && b != c && a != c)
		{
			printf("scalene\n");
		}
		else
		{
			printf("isosceles\n");
		}
	}
	
	return 0;
}