#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int n, k;
	
	scanf("%d %d", &n, &k);
	printf("%d", Factorial(n) / (Factorial(k) * Factorial(n - k)));
	
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