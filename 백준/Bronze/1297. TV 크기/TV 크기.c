#include <stdio.h>
#include <math.h>

int main(void)
{
	int d, h, w;
	double x;
	
	scanf("%d %d %d", &d, &h, &w);
	
	x = sqrt(h * h + w * w);
	h = (d * h) / x;
	w = (d * w) / x;
	
	printf("%d %d", h, w);
	
	return 0;
}