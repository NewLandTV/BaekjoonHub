#include <stdio.h>

int F(int n, int b);

int main(void)
{
	int t;
	int n;
	int b, sum = 0;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (b = 2, sum = 0; b <= 1000; b++)
		{
			sum += F(n, b);
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}

int F(int n, int b)
{
	int count = 0;
	
	while (n % b == 0)
	{
		n /= b;
		count++;
	}
	
	return count;
}