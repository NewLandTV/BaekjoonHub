#include <stdio.h>
#include <limits.h>

#define F(x) (a * (x) + b)

int main(void)
{
	int i;
	int n;
	int x[100], y[100];
	long long sum, min = INT_MAX;
	long long minA, minB, a, b;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for (a = 1; a <= 100; a++)
	{
		for (b = 1; b <= 100; b++)
		{
			for (i = sum = 0; i < n; i++)
			{
				sum += (y[i] - F(x[i])) * (y[i] - F(x[i]));
			}
			
			if (min > sum)
			{
				min = sum;
				minA = a;
				minB = b;
			}
		}
	}
	
	printf("%lld %lld", minA, minB);
	
	return 0;
}