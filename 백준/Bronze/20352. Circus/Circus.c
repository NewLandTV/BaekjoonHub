#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main(void)
{
	unsigned long long area;
	
	scanf("%llu", &area);
	printf("%lf", sqrt(area * M_PI) * 2.0);
	
	return 0;
}