#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int Min(int a, int b, int c)
{
	if (a > c && b > c)
	{
		return c;
	}
	
	if (a > b && c > b)
	{
		return b;
	}
	
	return a;
}

int main(void)
{
	int n;
	int a0;
	int a;
	int sum = 0;
	
	scanf("%d", &n);
	scanf("%d", &a0);
	
	for (; n > 0; n--)
	{
		scanf("%d", &a);
		
		sum += Min(Abs(a0 - a), 360 - a0 + a, a0 + 360 - a);
		a0 = a;
	}
	
	printf("%d", sum);
	
	return 0;
}