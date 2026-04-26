#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	float x;
	char unit[3];
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%f %s", &x, unit);
		
		if (strcmp(unit, "kg") == 0)
		{
			printf("%.4f lb\n", x * 2.2046f);
		}
		else if (strcmp(unit, "l") == 0)
		{
			printf("%.4f g\n", x * 0.2642f);
		}
		else if (strcmp(unit, "lb") == 0)
		{
			printf("%.4f kg\n", x * 0.4536f);
		}
		else if (strcmp(unit, "g") == 0)
		{
			printf("%.4f l\n", x * 3.7854f);
		}
	}
	
	return 0;
}