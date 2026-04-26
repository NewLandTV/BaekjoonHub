#include <stdio.h>

int main(void)
{
	int n;
	int a, b, x;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d %d %d", &a, &b, &x);
		printf("%d\n", a * (x - 1) + b);
	}
	
	return 0;
}