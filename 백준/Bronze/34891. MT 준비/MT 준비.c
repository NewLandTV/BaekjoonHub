#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, m;
	
	scanf("%d %d", &n, &m);
	printf("%d", (int)ceil((float)n / m));
	
	return 0;
}