#include <stdio.h>

#define PI 3.141592

int main(void)
{
	int n;
	char figure;
	float r, h;
	float v;
	float max = 0.0f;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %c", &figure);
		
		switch (figure)
		{
			case 'C':
				scanf("%f %f", &r, &h);
				
				v = PI * r * r * h / 3;
				
				break;
			case 'L':
				scanf("%f %f", &r, &h);
				
				v = PI * r * r * h;
				
				break;
			case 'S':
				scanf("%f", &r);
				
				v = PI * r * r * r * 4 / 3;
				
				break;
		}
		
		if (max < v)
		{
			max = v;
		}
	}
	
	printf("%.3f", max);
	
	return 0;
}