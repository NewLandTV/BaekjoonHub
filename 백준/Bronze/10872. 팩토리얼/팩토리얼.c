#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d", Factorial(n));
	
	return 0;
}

int Factorial(int n)
{
	int i;
	int result = 1;
	
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	
	return result;
}