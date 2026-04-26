#include <stdio.h>

int main(void)
{
	int i;
	int t;
	double a, b;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%lf %lf", &a, &b);
		
		a *= a * 0.5;
		b *= b * 0.5;
		
		printf("%d\n", (int)(a / b));
	}
	
	return 0;
}