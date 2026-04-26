#include <stdio.h>

int Factorial(int x);

int main(void)
{
	int n;
	int f;
	
	scanf("%d", &n);
	
	if (n <= 1)
	{
		printf("1");
		
		return 0;
	}
	
	f = Factorial(n);
	
	printf("%d", f % 10);
	
	return 0;
}

int Factorial(int x)
{
	int i;
	int result = 1;
	
	for (i = 2; i <= x; i++)
	{
		result *= i;
	}
	
	return result;
}