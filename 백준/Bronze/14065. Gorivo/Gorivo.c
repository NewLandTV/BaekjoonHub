#include <stdio.h>

int main(void)
{
	double x;
	
	scanf("%lf", &x);
	printf("%.6f", 100.0 / (x * 0.425143707430272));
	
	return 0;
}