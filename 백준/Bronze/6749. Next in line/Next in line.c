#include <stdio.h>

int main(void)
{
	int y;
	int m;
	
	scanf("%d", &y);
	scanf("%d", &m);
	printf("%d", (m - y) + m);
	
	return 0;
}