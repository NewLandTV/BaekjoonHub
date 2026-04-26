#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int c = 2;
	
	scanf("%d", &n);
	
	for (i = 2; i <= n; i++)
	{
		c += (i >> 1) + 1;
	}
	
	printf("%d", c);
	
	return 0;
}