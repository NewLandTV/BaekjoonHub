#include <stdio.h>

int main(void)
{
	int wc, hc, ws, hs;
	
	scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
	printf("%d", wc - ws >= 2 && hc - hs >= 2);
	
	return 0;
}