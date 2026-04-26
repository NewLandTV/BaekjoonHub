#include <stdio.h>

int main(void)
{
	int c, n;
	
	scanf("%d %d", &c, &n);
	
	if (c == n)
	{
		printf("%d", c);
	}
	else if (c < n)
	{
		printf("%d", c + 1);
	}
	else
	{
		printf("0");
	}
	
	return 0;
}