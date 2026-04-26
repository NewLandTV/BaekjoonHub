#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int ca, ba, pa;
	int cr, br, pr;
	
	scanf("%d %d %d", &ca, &ba, &pa);
	scanf("%d %d %d", &cr, &br, &pr);
	printf("%d", Max(0, cr - ca) + Max(0, br - ba) + Max(0, pr - pa));
	
	return 0;
}