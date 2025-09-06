#include <stdio.h>
#include <math.h>

int main(void)
{
	int c, k;
	int p, result;
	
	scanf("%d %d", &c, &k);
	
	p = pow(10, k);
	result = round(c / p) * p;
	
	if (c % p >= p * 0.5)
	{
		result += p;
	}
	
	printf("%d", result);
	
	return 0;
}