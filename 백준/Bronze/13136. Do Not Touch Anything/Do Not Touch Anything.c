#include <stdio.h>
#include <math.h>

int main(void)
{
	unsigned int r, c, n;
	unsigned long long w, h;
	
	scanf("%u %u %u", &r, &c, &n);
	
	h = ceil((float)r / n);
	w = ceil((float)c / n);
	
	printf("%lld", w * h);
	
	return 0;
}