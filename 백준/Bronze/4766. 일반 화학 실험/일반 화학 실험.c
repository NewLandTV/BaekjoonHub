#include <stdio.h>

int main(void)
{
	float x, y;
	
	scanf("%f", &x);
	
	while (1)
	{
		scanf("%f", &y);
		
		if (y == 999)
		{
			break;
		}
		
		printf("%.2f\n", y - x);
		
		x = y;
	}
	
	return 0;
}