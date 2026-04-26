#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int i;
	int x, y;
	int max, min;
	
	scanf("%d %d", &x, &y);
	
	max = Max(x, y);
	min = Min(x, y);
	
	for (i = 0; i < max - min; i++)
	{
		printf("1");
	}
	
	for (i = 0; i < min; i++)
	{
		printf("2");
	}
	
	return 0;
}