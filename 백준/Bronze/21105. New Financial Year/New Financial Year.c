#include <stdio.h>

int main(void)
{
	int n;
	double p, c;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%lf %lf", &p, &c);
		printf("%.6lf\n", p / (c + 100) * 100.0f);
	}
	
	return 0;
}