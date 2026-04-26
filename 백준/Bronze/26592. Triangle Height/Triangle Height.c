#include <stdio.h>

int main(void)
{
	int n;
	float a, b, h;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%f %f", &a, &b);
		
		h = (a * 2.0f) / b;
		
		printf("The height of the triangle is %.2f units\n", h);
	}
	
	return 0;
}