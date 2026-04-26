#include <stdio.h>

unsigned long long Pow(unsigned long long base, int exp);

int main(void)
{
	int t;
	int h;
	int m;
	int a;
	
	scanf("%d", &h);
	scanf("%d", &m);
	
	for (t = 1; t <= m; t++)
	{
		a = -Pow(t, 4) * 6 + h * Pow(t, 3) + Pow(t, 2) * 2 + t;
			
		if (a <= 0)
		{
			printf("The balloon first touches ground at hour: %d", t);
			
			return 0;
		}
	}
	
	printf("The balloon does not touch ground in the given time.");
	
	return 0;
}

unsigned long long Pow(unsigned long long base, int exp)
{
	unsigned long long result = 1;
	
	while (exp)
	{
		if (exp & 1)
		{
			result *= base;
		}
		
		exp >>= 1;
		base *= base;
	}
	
	return result;
}