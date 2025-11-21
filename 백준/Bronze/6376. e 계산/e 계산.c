#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int i;
	double e = 1.0;
	
	printf("n e\n");
	printf("- -----------\n");
	printf("0 1\n");
	
	for (i = 1; i <= 9; i++)
	{
		printf("%d ", i);
		
		e += 1.0 / Factorial(i);
		
		if (i == 1)
		{
			printf("2\n");
		}
		else if (i == 2)
		{
			printf("2.5\n");
		}
		else
		{
			printf("%.9f\n", e);
		}
	}
	
	return 0;
}

int Factorial(int n)
{
	int i;
	int f = 1;
	
	for (i = 2; i <= n; i++)
	{
		f *= i;
	}
	
	return f;
}