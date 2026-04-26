#include <stdio.h>
#include <math.h>

int main(void)
{
	int k, w, m;
	
	scanf("%d %d %d", &k, &w, &m);
	printf("%d", (int)ceil((w - k) / (double)m));
	
	return 0;
}