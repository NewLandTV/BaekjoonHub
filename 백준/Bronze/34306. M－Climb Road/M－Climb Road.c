#include <stdio.h>

int main(void)
{
	int w;
	int n;
	
	scanf("%d", &w);
	scanf("%d", &n);
	printf("%d", w * 5280 / n);
	
	return 0;
}