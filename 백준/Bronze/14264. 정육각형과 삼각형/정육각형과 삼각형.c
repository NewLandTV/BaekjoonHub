#include <stdio.h>
#include <math.h>

int main(void)
{
	int l;
	
	scanf("%d", &l);
	printf("%.9lf", pow(l, 2) * sqrt(3) * 0.25);
	
	return 0;
}