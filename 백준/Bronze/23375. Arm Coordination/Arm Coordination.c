#include <stdio.h>

int main(void)
{
	int x, y;
	int r;
	
	scanf("%d %d", &x, &y);
	scanf("%d", &r);
	printf("%d %d\n", x - r, y + r);
	printf("%d %d\n", x + r, y + r);
	printf("%d %d\n", x + r, y - r);
	printf("%d %d\n", x - r, y - r);
	
	return 0;
}