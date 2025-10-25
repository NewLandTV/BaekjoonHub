#include <stdio.h>

int main(void)
{
	int i;
	int n;
	long long r = 1;
	
	scanf("%d", &n);
	
	for (i = 2; i <= n; i++)
	{
		r *= i;
		
		while (r % 10 == 0)
		{
			r /= 10;
		}
		
		r %= 100000000;
	}
	
	printf("%d", r % 10);
	
	return 0;
}