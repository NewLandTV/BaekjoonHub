#include <stdio.h>

int main(void)
{
	int i;
	float c;
	float t;
	
	while (1)
	{
		scanf("%f", &c);
		
		if (c == 0.0f)
		{
			return 0;
		}
		
		for (i = 2, t = 0; t < c; t += 1.0f / i++);
		
		printf("%d card(s)\n", i - 2);
		
	}
	
	return 0;
}