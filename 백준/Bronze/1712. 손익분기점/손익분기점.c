#include <stdio.h>

int main(void)
{
	int a, b, c;
	int x;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (b >= c)
	{
		printf("-1");
		
		return 0;
	}
	
	x = a / (c - b) + 1;
	
	printf("%d", x);
	
	return 0;
}