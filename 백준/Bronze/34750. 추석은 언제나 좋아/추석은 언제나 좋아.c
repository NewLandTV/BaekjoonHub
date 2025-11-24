#include <stdio.h>

int main(void)
{
	int n;
	int p;
	
	scanf("%d", &n);
	
	if (n >= 1000000)
	{
		p = n * 0.2f;
	}
	else if (n >= 500000)
	{
		p = n * 0.15f;
	}
	else if (n >= 100000)
	{
		p = n * 0.1f;
	}
	else
	{
		p = n * 0.05f;
	}
	
	printf("%d %d", p, n - p);
	
	return 0;
}