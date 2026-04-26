#include <stdio.h>

int main(void)
{
	int i;
	int p[4];
	int x, y, r;
	int collision = 0;
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &p[i]);
	}
	
	scanf("%d %d %d", &x, &y, &r);
	
	for (i = 0; i < 4; i++)
	{
		if (p[i] != x)
		{
			continue;
		}
		
		collision = 1;
		
		printf("%d ", i + 1);
	}
	
	if (!collision)
	{
		printf("0");
	}
	
	return 0;
}