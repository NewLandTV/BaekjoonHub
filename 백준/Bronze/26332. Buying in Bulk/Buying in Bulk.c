#include <stdio.h>

int main(void)
{
	int n;
	int c, p;
	int x;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d %d", &c, &p);
		
		x = c * p - (c - 1) * 2;
		
		printf("%d %d\n", c, p);
		printf("%d\n", x);
	}
	
	return 0;
}