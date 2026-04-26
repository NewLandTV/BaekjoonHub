#include <stdio.h>

int main(void)
{
	float n;
	
	while (1)
	{
		scanf("%f", &n);
		
		if (n == 0.0f)
		{
			break;
		}
		
		printf("%.2f\n", n + n * n + n * n * n + n * n * n * n + 1.0f);
	}
	
	return 0;
}