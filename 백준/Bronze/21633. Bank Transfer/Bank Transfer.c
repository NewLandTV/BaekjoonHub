#include <stdio.h>

int main(void)
{
	int k;
	float x;
	
	scanf("%d", &k);
	
	x = k * 0.01f + 25.0f;
	
	if (x <= 100.0f)
	{
		printf("100.00");
		
		return 0;
	}
	else if (x >= 2000.0f)
	{
		printf("2000.00");
		
		return 0;
	}
	
	printf("%.2f", x);
	
	return 0;
}