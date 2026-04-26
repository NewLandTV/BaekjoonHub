#include <stdio.h>

int main(void)
{
	int i;
	char bowls[51];
	int h;
	
	scanf("%s", bowls);
	
	for (i = 1, h = 10; bowls[i]; i++)
	{
		if (bowls[i - 1] == bowls[i])
		{
			h += 5;
		}
		else
		{
			h += 10;
		}
	}
	
	printf("%d", h);
	
	return 0;
}