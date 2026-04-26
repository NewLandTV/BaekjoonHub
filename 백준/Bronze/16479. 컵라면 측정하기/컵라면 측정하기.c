#include <stdio.h>
#include <math.h>

int main(void)
{
	int k;
	int d1, d2;
	
	scanf("%d", &k);
	scanf("%d %d", &d1, &d2);
	printf("%.6f", pow(k, 2) - pow((d1 - d2) * 0.5, 2));
	
	return 0;
}