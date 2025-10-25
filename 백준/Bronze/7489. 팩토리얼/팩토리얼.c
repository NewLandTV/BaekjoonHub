#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int t;
	int n;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		printf("%d\n", Factorial(n));
	}
	
	return 0;
}

int Factorial(int n)
{
	int i;
	int r = 1;
	
	for (i = 2; i <= n; i++)
	{
		r *= i;
		
		while (r % 10 == 0)
		{
			r /= 10;
		}
		
		r %= 1000;
	}
	
	return r % 10;
}