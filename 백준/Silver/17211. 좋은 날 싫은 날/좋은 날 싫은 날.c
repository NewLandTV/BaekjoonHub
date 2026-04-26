#include <stdio.h>

int Round(double x);

int main(void)
{
	int i;
	int n, e;
	float a, b, c, d;
	double x[101], y[101];
	int p, q;
	
	scanf("%d %d", &n, &e);
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	x[0] = e ? c : a;
	y[0] = e ? d : b;
	
	for (i = 1; i < n; i++)
	{
		x[i] = x[i - 1] * a + y[i - 1] * c;
		y[i] = x[i - 1] * b + y[i - 1] * d;
	}
	
	p = Round(x[n - 1] * 1000);
	q = Round(y[n - 1] * 1000);
	
	printf("%d\n%d", p, q);
	
	return 0;
}

int Round(double x)
{
	x *= 10;
	
	if ((int)x % 10 >= 5)
	{
		return (int)(x / 10 + 1);
	}
	
	return (int)(x / 10);
}