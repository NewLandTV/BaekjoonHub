#include <stdio.h>

int main(void)
{
	int w, h;
	int n, a, b;
	float x;
	
	scanf("%d %d", &w, &h);
	scanf("%d %d %d", &n, &a, &b);
	
	if (w < a || h < b)
	{
		printf("-1");
		
		return 0;
	}
	
	x = (float)n / ((w / a) * (h / b));
	
	if (x == (int)x)
	{
		printf("%d", (int)x);
	}
	else
	{
		printf("%d", (int)x + 1);
	}
	
	return 0;
}