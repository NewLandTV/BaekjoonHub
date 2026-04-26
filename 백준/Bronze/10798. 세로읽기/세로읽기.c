#include <stdio.h>

int main(void)
{
	int i, j;
	char input[5][15] = { 0, };
	
	for (i = 0; i < 5; i++)
	{
		scanf("%s", input[i]);
	}
	
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (input[j][i] != NULL)
			{
				putchar(input[j][i]);
			}
		}
	}
	
	return 0;
}