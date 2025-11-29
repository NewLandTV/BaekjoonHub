#include <stdio.h>

int main(void)
{
	int p;
	int c25 = 0, c10 = 0, c5 = 0, c1 = 0;
	
	scanf("%d", &p);
	
	c25 = (100 - p) / 25;
	p += c25 * 25;
	c10 = (100 - p) / 10;
	p += c10 * 10;
	c5 = (100 - p) / 5;
	p += c5 * 5;
	c1 = 100 - p;
	
	printf("%d %d %d %d", c25, c10, c5, c1);
	
	return 0;
}