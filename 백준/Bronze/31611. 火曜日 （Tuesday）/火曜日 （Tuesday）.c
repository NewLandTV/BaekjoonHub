#include <stdio.h>

int main(void)
{
	int x;
	
	scanf("%d", &x);
	printf("%d", (x + 5) % 7 == 0);
	
	return 0;
}