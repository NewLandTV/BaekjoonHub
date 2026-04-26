#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int w1, h1, w2, h2;
	
	scanf("%d %d %d %d", &w1, &h1, &w2, &h2);
	printf("%d", (Max(w1, w2) << 1) + ((h1 + h2) << 1) + 4);
	
	return 0;
}