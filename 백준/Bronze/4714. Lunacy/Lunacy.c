#include <stdio.h>

int main(void)
{
	float x;
	
	while (1)
	{
		scanf("%f", &x);
		
		if (x <= -1.0f)
		{
			break;
		}
		
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", x, x * 0.167f);
	}
	
	return 0;
}