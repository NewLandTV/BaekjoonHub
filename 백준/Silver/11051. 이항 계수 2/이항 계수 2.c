#include <stdio.h>

int ModularInverse(int a, int p);
int Factorial(int n);

int main(void)
{
	int n, k;
	
	scanf("%d %d", &n, &k);
	printf("%d", (Factorial(n) * ModularInverse((Factorial(k) * Factorial(n - k)) % 10007, 10005)) % 10007);
	
	return 0;
}

int ModularInverse(int a, int p)
{
	int result;
	
	for (result = 1; p > 0; p >>= 1)
	{
		if (p & 1)
		{
			result *= a;
			p--;
			result %= 10007;
		}
		
		a *= a;
		a %= 10007;
	}
	
	return result;
}

int Factorial(int n)
{
	int i;
	int result = 1;
	
	for (i = 1; i <= n; i++)
	{
		result *= i;
		result %= 10007;
	}
	
	return result;
}