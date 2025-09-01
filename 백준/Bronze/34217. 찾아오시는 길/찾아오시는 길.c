#include <stdio.h>

int main(void)
{
	int a, b;
	int c, d;
	int h, y;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	
	h = a + c;
	y = b + d;
	
	if (h < y)
	{
		printf("Hanyang Univ.");
	}
	else if (h > y)
	{
		printf("Yongdap");
	}
	else
	{
		printf("Either");
	}
	
	return 0;
}