#include <stdio.h>

#define PI 3.1415926535897

int main(void)
{
	int r;
	
	scanf("%d", &r);
	
	printf("%.6f\n", r * r * PI);
	printf("%.6f", r * r * 2.0);
	
	return 0;
}