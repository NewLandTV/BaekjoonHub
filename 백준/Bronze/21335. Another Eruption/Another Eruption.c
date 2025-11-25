#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main(void)
{
	long long a;
	
	scanf("%lld", &a);
	printf("%.9f", sqrt(a / PI) * 2 * PI);
	
	return 0;
}