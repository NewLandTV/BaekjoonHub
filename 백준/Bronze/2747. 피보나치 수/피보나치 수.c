#include <stdio.h>

int array[17] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597 };

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
	if (n < 17)
	{
		return array[n];
	}
	
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}