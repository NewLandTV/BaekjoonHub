#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);
	
	while (n & 1)
	{
		n = (int)ceil(n * 0.5);
	}
	
	printf("%d", n);
	
	return 0;
}