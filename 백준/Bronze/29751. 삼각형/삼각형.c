#include <stdio.h>

int main(void)
{
	int w, h;
	
	scanf("%d %d", &w, &h);
	printf("%.1f", w * h * 0.5f);
	
	return 0;
}