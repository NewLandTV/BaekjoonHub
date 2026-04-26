#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	n %= 8;
	
	if (n == 1)
	{
		printf("1");
	}
	else if (n == 2 || n == 0)
	{
		printf("2");
	}
	else if (n == 3 || n == 7)
	{
		printf("3");
	}
	else if (n == 4 || n == 6)
	{
		printf("4");
	}
	else if (n == 5)
	{
		printf("5");
	}
	
	return 0;
}