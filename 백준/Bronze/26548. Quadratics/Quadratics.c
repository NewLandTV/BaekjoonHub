#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double a, b, c;
	double d;
	double x1, x2;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lf %lf %lf", &a, &b, &c);
		
		d = sqrt(b * b - a * c * 4);
		x1 = (-b + d) / (a * 2);
		x2 = (-b - d) / (a * 2);
		
		printf("%.3lf, %.3lf\n", round(x1 * 1000) / 1000, round(x2 * 1000) / 1000);
	}
	
	return 0;
}