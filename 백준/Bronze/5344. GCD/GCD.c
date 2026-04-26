#include <stdio.h>

int GCD(int a, int b);

int main(void)
{
	int n;
	int a, b;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", GCD(a, b));
	}
	
	return 0;
}

int GCD(int a, int b)
{
	int temp;
	
	while (b)
	{
		temp = a;
		a = b;
		b = temp % b;
	}
	
	return a;
}