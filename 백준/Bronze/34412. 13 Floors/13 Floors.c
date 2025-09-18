#include <stdio.h>

int main(void)
{
	int x;
	
	scanf("%d", &x);
	
	if (x >= 13)
	{
		printf("%d", x + 1);
	}
	else
	{
		printf("%d", x);
	}
	
	return 0;
}