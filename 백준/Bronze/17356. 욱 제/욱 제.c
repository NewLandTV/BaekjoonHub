#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b;
	double m;
	
	scanf("%d %d", &a, &b);
	
	m = (b - a) / 400.0;
	
	printf("%lf", 1 / (pow(10, m) + 1));
	
	return 0;
}