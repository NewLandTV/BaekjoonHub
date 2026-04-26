#include <stdio.h>

#define T(n) ((n) * ((n) + 1) >> 1)

int W(int n);

int main(void)
{
	int t;
	int n;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d", &n);
		printf("%d\n", W(n));
	}
	
	return 0;
}

int W(int n)
{
	int k;
	int x = 0;
	
	for (k = 1; k <= n; k++)
	{
		x += k * T(k + 1);
	}
	
	return x;
}