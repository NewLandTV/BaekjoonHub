#include <stdio.h>

#define PI 3.141592f

int main(void)
{
	int d1, d2;
	
	scanf("%d", &d1);
	scanf("%d", &d2);
	printf("%.6f", PI * d2 * 2.0f + d1 * 2.0f);
	
	return 0;
}