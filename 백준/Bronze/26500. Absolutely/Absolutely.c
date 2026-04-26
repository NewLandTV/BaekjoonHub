#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))

int main(void)
{
	int n;
	double a, b;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lf %lf", &a, &b);
		printf("%.1lf\n", Max(a, b) - Min(a, b));
	}
	
	return 0;
}