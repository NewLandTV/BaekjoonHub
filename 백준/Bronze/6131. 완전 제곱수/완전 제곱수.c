#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	int c = 0;
	
	scanf("%d", &n);
	
	for (b = 1; b <= 500; b++)
	{
		for (a = b; a <= 500; a++)
		{
			if (a * a == b * b + n)
			{
				c++;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}