#include <stdio.h>

int main(void)
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a == 1 || a == 3) && (b == 6 || b == 8) && (c == 2 || c == 5))
	{
		printf("JAH");
	}
	else
	{
		printf("EI");
	}
	
	return 0;
}