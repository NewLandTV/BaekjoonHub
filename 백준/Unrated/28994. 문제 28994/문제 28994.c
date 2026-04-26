#include <stdio.h>
#include <math.h>

int main(void)
{
	long long l;
	
	scanf("%lld", &l);
	printf("%lld", (long long)(sqrt(l * 8 + 1) - 1) >> 1);
	
	return 0;
}