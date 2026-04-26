#include <stdio.h>

int main(void)
{
	float x, y;
	
	while (1)
	{
		scanf("%f %f", &x, &y);
		
		if (x == 0.0f && y == 0.0f)
		{
			printf("AXIS");
			
			break;
		}
		
		if (x > 0.0f && y > 0.0f)
		{
			printf("Q1\n");
		}
		else if (x < 0.0f && y > 0.0f)
		{
			printf("Q2\n");
		}
		else if (x < 0.0f && y < 0.0f)
		{
			printf("Q3\n");
		}
		else if (x > 0.0f && y < 0.0f)
		{
			printf("Q4\n");
		}
		else if (x == 0.0f || y == 0.0f)
		{
			printf("AXIS\n");
		}
	}
	
	return 0;
}