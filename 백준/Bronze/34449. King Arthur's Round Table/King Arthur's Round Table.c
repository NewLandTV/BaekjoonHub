#include <stdio.h>

#define PI 3.14159

int main(void)
{
	double d;
	double w;
	int n;
	
	scanf("%lf", &d);
	scanf("%lf", &w);
	scanf("%d", &n);
	
	if (d * PI >= w * n)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}