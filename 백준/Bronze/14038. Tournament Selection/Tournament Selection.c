#include <stdio.h>

int main(void)
{
	int i;
	int win = 0;
		
	for (i = 0; i < 6; i++)
	{
		if (getchar() == 'W')
		{
			win++;
		}
		
		getchar();
	}
	
	if (win >= 5)
	{
		printf("1");
	}
	else if (win >= 3)
	{
		printf("2");
	}
	else if (win >= 1)
	{
		printf("3");
	}
	else
	{
		printf("-1");
	}
	
	return 0;
}