#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d", Fibonacci(n));	
	
	return 0;
}

int Fibonacci(int n)
{
	int i;
	
	if (n < 2)
	{
		return n;
	}
	
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}