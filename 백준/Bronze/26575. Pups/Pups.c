#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double d, f, p;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%lf %lf %lf", &d, &f, &p);
		printf("$%.2f\n", round(d * f * p * 100) / 100);
	}
	
	return 0;
}