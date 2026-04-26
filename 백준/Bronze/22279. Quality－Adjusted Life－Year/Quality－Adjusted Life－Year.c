#include <stdio.h>

int main(void)
{
	int n;
	float q, y;
	float qaly = 0.0f;
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%f %f", &q, &y);
		
		qaly += q * y;
	}
	
	printf("%f", qaly);
	
	return 0;
}