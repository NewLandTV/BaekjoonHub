#include <stdio.h>

int main(void)
{
	int w, h, d;
	
	scanf("%d %d %d", &w, &h, &d);
	
	w -= d * 2;
	h -= d * 2;
	
	if (w <= 0 || h <= 0)
	{
		printf("0");
		
		return 0;
	}
	
	printf("%d", w * h);
	
	return 0;
}