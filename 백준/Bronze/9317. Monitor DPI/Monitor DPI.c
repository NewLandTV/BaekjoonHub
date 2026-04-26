#include <stdio.h>
#include <math.h>

int main(void)
{
	float d;
	int rh, rv;
	float w, h;
	float dpiH, dpiV;
	
	while (1)
	{
		scanf("%f %d %d", &d, &rh, &rv);
		
		if (d == 0 && rh == 0 && rv == 0)
		{
			break;
		}
		
		w = (d * 16) / sqrt(337);
		h = (w * 9) / 16;
		dpiH = rh / w;
		dpiV = rv / h;
		
		printf("Horizontal DPI: %.2f\n", dpiH);
		printf("Vertical DPI: %.2f\n", dpiV);
	}
	
	return 0;
}