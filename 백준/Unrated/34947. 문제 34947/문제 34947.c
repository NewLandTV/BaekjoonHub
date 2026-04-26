#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, t;
	int r, d, theta;
	double w;
	double s, r1, r2, r3;
	double l1, l2, l3;
	double d1, d2, d3;
	double v1, v2, v3;
	
	scanf("%d %d", &n, &t);
	scanf("%d %d %d %lf", &r, &d, &theta, &w);
	
	w *= 0.01;
	
	s = (double)t / n;
	
	r1 = r - w * 0.5;
	r2 = r1 - w;
	r3 = r2 - w;
	
	l1 = theta * (M_PI / 180) * r1;
	l2 = theta * (M_PI / 180) * r2;
	l3 = theta * (M_PI / 180) * r3;
	
	d1 = sin((180 - theta) * (M_PI / 360)) * r1;
	d2 = sin((180 - theta) * (M_PI / 360)) * r2;
	d3 = sin((180 - theta) * (M_PI / 360)) * r3;
	
	v1 = (l1 + d1 * 2 + d) * 2 / s;
	v2 = (l2 + d2 * 2 + d) * 2 / s;
	v3 = (l3 + d3 * 2 + d) * 2 / s;
	
	printf("%.6lf\n", v1 - v3);
	printf("%.6lf", v1 - v2);
	
	return 0;
}