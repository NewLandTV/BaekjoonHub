#include <stdio.h>

void IntegerFactorization(int value);

int main(void)
{
	int n;
	
	scanf("%d", &n);
	IntegerFactorization(n);
	
	return 0;
}

void IntegerFactorization(int value)
{
	int i;
	int exponent = 1;
	
	for (i = 2; i <= value; i++)
	{
		if (value % i != 0)
		{
			continue;
		}
		
		if (exponent == 1)
		{
			printf("%d\n", i);
		}
		
		value /= i;
		
		if (value % i == 0)
		{
			exponent++;
			
			printf("%d\n", i);
		}
		else if (value % i != 0)
		{
			exponent = 1;
		}
		
		i = 1;
	}
}