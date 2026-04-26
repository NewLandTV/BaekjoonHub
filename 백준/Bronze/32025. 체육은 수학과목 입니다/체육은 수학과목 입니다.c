#include <stdio.h>

#define Min(a, b) (a > b ? b : a)

int main(void)
{
	int h, w;
	
	scanf("%d", &h);
	scanf("%d", &w);
	printf("%.0f", Min(h, w) * 50.0f);
	
	return 0;
}