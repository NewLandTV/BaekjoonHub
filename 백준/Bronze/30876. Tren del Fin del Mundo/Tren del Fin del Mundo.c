#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int x, y;
	int southX = 10000;
	int southY = 10000;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		
		if (southY > y)
		{
			southX = x;
			southY = y;
		}
	}
	
	printf("%d %d", southX, southY);
	
	return 0;
}