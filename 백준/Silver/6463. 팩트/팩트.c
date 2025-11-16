#include <stdio.h>

int main(void)
{
	int i;
	int n;
	long long r;
	
	while (~scanf("%d", &n))
	{
		for (r = i = 1; i <= n; i++)
		{
			r *= i;
			
			while (r % 10 == 0)
			{
				r /= 10;
			}
			
			r %= 100000;
		}
		
		printf("%5d -> %d\n", n, r % 10);
	}
	
	return 0;
}