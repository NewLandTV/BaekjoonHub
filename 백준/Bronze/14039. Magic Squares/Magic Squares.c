#include <stdio.h>

int main(void)
{
	int i, j;
	int square[4][4];
	int sumCol, sumRow;
	int sum[8], c = 0, s;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &square[i][j]);
		}
	}
	
	for (i = 0; i < 4; i++)
	{
		for (j = sumCol = sumRow = 0; j < 4; j++)
		{
			sumCol += square[j][i];
			sumRow += square[i][j];
		}
		
		sum[c++] = sumCol;
		sum[c++] = sumRow;
	}
	
	for (i = 0, s = sum[0]; i < c; i++)
	{
		if (sum[i] != s)
		{
			printf("not magic");
			
			return 0;
		}
	}
	
	printf("magic");
	
	return 0;
}