#include <stdio.h>

int main(void)
{
	int n, d;
	float x;
	
	scanf("%d %d", &n, &d);
	
	x = n * 0.5 - d;
	
	printf("%.1f", round(x * 10) * 0.1f);
	
	return 0;
}