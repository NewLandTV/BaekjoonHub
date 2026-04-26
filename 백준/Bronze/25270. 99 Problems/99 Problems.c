#include <stdio.h>

int main(void)
{
	int n;
	int x;
	
	scanf("%d", &n);
	
	for (x = 99;; x += 100)
	{
		if (x > n)
		{
			if (x > 100 && n - x + 100 < x - n)
			{
				printf("%d", x - 100);
			}
			else
			{
				printf("%d", x);
			}
			
			return 0;
		}
	}
	
	return 0;
}