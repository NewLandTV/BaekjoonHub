#include <stdio.h>

int Sum(int n, int x);

int main(void)
{
	int i;
	int n;
	int s;
	int max = 0, v;
	
	scanf("%d", &n);
	
	for (i = 2; i <= n; i++)
	{
		s = Sum(n, i);
		
		if (max < s)
		{
			max = s;
			v = i;
		}
	}
	
	printf("%d %d", max, v);
	
	return 0;
}

int Sum(int n, int x)
{
	int r = 0;
	
	while (n)
	{
		r += n % x;
		n /= x;
	}
	
	return r;
}