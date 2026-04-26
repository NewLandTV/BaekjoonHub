#include <stdio.h>

int main(void)
{
	int i;
	int x, n;
	
	scanf("%d %d", &x, &n);
	
	for (i = 0; i < n; i++)
	{
		if (x & 1)
		{
			x = (x << 1) ^ 6;
		}
		else
		{
			x = (x >> 1) ^ 6;
		}
	}
	
	printf("%d", x);
	
	return 0;
}