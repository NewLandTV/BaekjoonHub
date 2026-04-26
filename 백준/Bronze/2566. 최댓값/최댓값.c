#include <stdio.h>

int main(void)
{
	int c, r;
	int input;
	int maxValue = -1;
	int maxColumn, maxRow;
	
	for (c = 1; c <= 9; c++)
	{
		for (r = 1; r <= 9; r++)
		{
			scanf("%d", &input);
			
			if (input <= maxValue)
			{
				continue;
			}
			
			maxValue = input;
			maxColumn = c;
			maxRow = r;
		}
	}
	
	printf("%d\n", maxValue);
	printf("%d %d", maxColumn, maxRow);
	
	return 0;
}