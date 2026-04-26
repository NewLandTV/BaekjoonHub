#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	if (n > 5)
	{
		printf("%d", 6 - (n + 1 >> 1));
	}
	else
	{
		printf("%d", n + 2 >> 1);
	}
	
	return 0;
}