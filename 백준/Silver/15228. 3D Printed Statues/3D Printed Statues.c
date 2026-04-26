#include <stdio.h>
#include <math.h>

#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int i;
	int n;
	int p, day, min;
	
	scanf("%d", &n);
	
	for (p = 1, day = 0, min = n; p <= n >> 1; day = ++p - 1)
	{
		day += (int)ceil((double)n / pow(2, p - 1));
		min = Min(day, min);
	}
	
	printf("%d", min);
	
	return 0;
}