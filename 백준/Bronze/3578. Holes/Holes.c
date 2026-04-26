#include <stdio.h>

int main(void)
{
	int i;
	int h;
	
	scanf("%d", &h);
	
	if (h == 0)
	{
		printf("1");
	}
	else if (h == 1)
	{
		printf("0");
	}
	else if (h & 1)
	{
		printf("4");
	}
	
	for (i = 0; i < h >> 1; i++)
	{
		printf("8");
	}
	
	return 0;
}