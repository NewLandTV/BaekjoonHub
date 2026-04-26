#include <stdio.h>

int main(void)
{
	int i;
	int n, a, b;
	int fizz = 0, buzz = 0, fizzBuzz = 0;
	
	scanf("%d %d %d", &n, &a, &b);
	
	for (i = 1; i <= n; i++)
	{
		if (i % a == 0)
		{
			if (i % b == 0)
			{
				fizzBuzz++;
			}
			else
			{
				fizz++;
			}
		}
		else if (i % b == 0)
		{
			buzz++;
		}
	}
	
	printf("%d %d %d", fizz, buzz, fizzBuzz);
	
	return 0;
}