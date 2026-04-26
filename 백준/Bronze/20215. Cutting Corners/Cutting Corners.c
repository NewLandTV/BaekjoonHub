#include <stdio.h>
#include <math.h>

int main(void)
{
	int w, h;
	
	scanf("%d %d", &w, &h);
	printf("%.9lf", w + h - sqrt(pow(w, 2.0) + pow(h, 2.0)));
	
	return 0;
}