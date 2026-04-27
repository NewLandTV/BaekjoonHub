#include <stdio.h>

int main(void)
{
	int d1, d2, d3;
	float a, b, c;
	
	scanf("%d %d %d", &d1, &d2, &d3);
	
	b = (d1 - d2 + d3) * 0.5;
	c = d3 - b;
	a = d1 - b;
	
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("-1");
		
		return 0;
	}
	
	printf("1\n");
	printf("%.1f %.1f %.1f", a, b, c);
	
	return 0;
}