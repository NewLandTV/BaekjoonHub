#include <stdio.h>
#include <math.h>

int main(void)
{
	double x1, y1, r1;
	double x2, y2, r2;
	double d;
	
	scanf("%lf %lf %lf", &x1, &y1, &r1);
	scanf("%lf %lf %lf", &x2, &y2, &r2);
	
	d = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	
	printf("%s", pow(r1 + r2, 2) > d ? "YES" : "NO");
	
	return 0;
}