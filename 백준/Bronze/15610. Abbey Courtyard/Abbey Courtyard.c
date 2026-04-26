#include <stdio.h>
#include <math.h>

int main(void)
{
	double a;
	
	scanf("%lf", &a);
	printf("%.8lf", sqrt(a) * 4.0);
	
	return 0;
}