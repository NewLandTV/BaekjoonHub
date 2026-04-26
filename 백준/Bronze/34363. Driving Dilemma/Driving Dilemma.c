#include <stdio.h>

int main(void)
{
	int s;
	float d;
	float t;
	
	scanf("%d", &s);
	scanf("%f", &d);
	scanf("%f", &t);
	printf("%s", s * t * 5280 >= d * 3600 ? "MADE IT" : "FAILED TEST");
	
	return 0;
}