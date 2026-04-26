#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	int temp;
	int max = 0;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a == b && a == c && b == c)
		{
			temp = a * 1000 + 10000;
		}
		else if (a == b || a == c)
		{
			temp = a * 100 + 1000;
		}
		else if (b == c)
		{
			temp = b * 100 + 1000;
		}
		else if (a > b && a > c)
		{
			temp = a * 100;
		}
		else if (b > a && b > c)
		{
			temp = b * 100;
		}
		else if (c > a && c > b)
		{
			temp = c * 100;
		}
		
		if (max < temp)
		{
			max = temp;
		}
	}
	
	printf("%d", max);
	
	return 0;
}