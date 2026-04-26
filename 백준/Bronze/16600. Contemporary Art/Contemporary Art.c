#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned long long a;
	
	scanf("%llu", &a);
	printf("%f", sqrt(a) * 4);
	
	return 0;
}