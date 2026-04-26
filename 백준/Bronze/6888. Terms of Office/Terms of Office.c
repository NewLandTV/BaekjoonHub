#include <stdio.h>

int main(void)
{
	int i;
	int x;
	int y;
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	for (i = x; i <= y; i++)
	{
		if ((i - x) % 60 == 0)
		{
			printf("All positions change in year %d\n", i);
		}
	}
	
	return 0;
}