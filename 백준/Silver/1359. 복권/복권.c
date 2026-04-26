#include <stdio.h>

int d[8];

int Factorial(int n);
int Combination(int n, int m);

int main(void)
{
	int i;
	int n, m, k;
	double result;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for (i = 0; i <= m - k; i++)
	{
		result += Combination(m, m - i) * Combination(n - m, i);
	}
	
	result /= Combination(n, m);
	
	printf("%.10f", result);
	
	return 0;
}

int Factorial(int n)
{
	if (d[n - 1])
	{
		return d[n - 1];
	}
	
	int i;
	int x;
	
	for (i = x = 1; i <= n; i++)
	{
		d[n - 1] = (x *= i);
	}
	
	return x;
}

int Combination(int n, int m)
{
	if (n >> 1 < m)
	{
		m = n - m;
	}
	
	return Factorial(n) / (Factorial(m) * Factorial(n - m));
}