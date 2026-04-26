#include <stdio.h>

int main(void)
{
	int i, j;
	char lines[9][8];
	int count = 0;
	
	for (i = 0; i < 8; i++)
	{
		scanf("%s", lines[i]);
	}
	
	for (i = 0; i < 8; i++)
	{
		for (j = i & 1; j < 8; j += 2)
		{
			if (lines[i][j] == 'F')
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}