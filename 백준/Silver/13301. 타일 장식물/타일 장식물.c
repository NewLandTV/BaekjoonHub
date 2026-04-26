#include <stdio.h>

long long array[81] = { 1, 1 };

long long Fibonacci(int n);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	Fibonacci(n);
	printf("%lld", array[n] * 2 + array[n - 1] * 2);
	
	return 0;
}

long long Fibonacci(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	
	if (array[n] != 0)
	{
		return array[n];
	}
	
	array[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
	
	return array[n];
}