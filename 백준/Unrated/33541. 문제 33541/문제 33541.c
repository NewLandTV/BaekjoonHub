#include <stdio.h>

int main(void)
{
	int i;
	int x;
	int y;
	
	scanf("%d", &x);
	
	for (i = ++x; i < 10000; i++)
	{
		y = i / 100 + i % 100;
		
		if (y * y == i)
		{
			printf("%d", i);
			
			return 0;
		}
	}
	
	printf("-1");
	
	return 0;
}