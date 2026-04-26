#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("%d %d", n * 78 / 100, n * 80 / 100 + n * 20 / 100 * 78 / 100);
	
	return 0;
}