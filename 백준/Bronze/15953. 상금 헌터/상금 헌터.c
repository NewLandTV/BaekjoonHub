#include <stdio.h>

int main(void)
{
	int t;
	int a, b;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d", &a, &b);
		
		if (a == 0)
		{
			a = 0;
		}
		else if (a == 1)
		{
			a = 500;
		}
		else if (a <= 3)
		{
			a = 300;
		}
		else if (a <= 6)
		{
			a = 200;
		}
		else if (a <= 10)
		{
			a = 50;
		}
		else if (a <= 15)
		{
			a = 30;
		}
		else if (a <= 21)
		{
			a = 10;
		}
		else
		{
			a = 0;
		}
		
		if (b == 0)
		{
			b = 0;
		}
		else if (b == 1)
		{
			b = 512;
		}
		else if (b <= 3)
		{
			b = 256;
		}
		else if (b <= 7)
		{
			b = 128;
		}
		else if (b <= 15)
		{
			b = 64;
		}
		else if (b <= 31)
		{
			b = 32;
		}
		else
		{
			b = 0;
		}
		
		printf("%d\n", (a + b) * 10000);
	}
	
	return 0;
}