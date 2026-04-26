#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	double c;
	double sum = 0.0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%lf", &c);
		
		sum += c *= c * c;
	}
	
	printf("%lf", pow(sum, 1.0/3.0));
	
	return 0;
}