#include <stdio.h>

int main(void)
{
	int e, p, s;
	
	scanf("%d %d %d", &e, &p, &s);
	
	e *= 2 * 229 * 324;
	p *= 2 * 297 * 420;
	s *= 210 * 297;
	
	printf("%.6f", (e + p + s) * 0.000001f);
	
	return 0;
}