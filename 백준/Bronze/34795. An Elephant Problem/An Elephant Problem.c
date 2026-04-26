#include <stdio.h>
#include <math.h>

int main(void)
{
	int m, d;
	
	scanf("%d %d", &m, &d);
	printf("%d", m > d ? 1 : (int)ceil((double)d / m));
	
	return 0;
}