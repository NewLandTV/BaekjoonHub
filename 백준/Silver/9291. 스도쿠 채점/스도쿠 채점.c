#include <stdio.h>

int CheckSudoku(int (*board)[9]);

int main(void)
{
	int i, j;
	int x;
	int t;
	int board[9][9];
	int correct;
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				scanf("%d", &board[i][j]);
			}
		}
		
		correct = CheckSudoku(board);
		
		printf("Case %d: %sCORRECT\n", x, correct ? "" : "IN");
	}
	
	return 0;
}


int CheckSudoku(int (*board)[9])
{
	int i, j;
	int r, c;
	int rowNumber[9];
	int colNumber[9];
	int box[9];
	int row, col;
	int number;
	
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			rowNumber[j] = 0;
			colNumber[j] = 0;
		}
		
		for (j = 0; j < 9; j++)
		{
			row = board[i][j] - 1;
			col = board[j][i] - 1;
			
			if (rowNumber[row] || colNumber[col])
			{
				return 0;
			}
			
			rowNumber[row] = 1;
			colNumber[col] = 1;
			
			if (i % 3 != 0 || j % 3 != 0)
			{
				continue;
			}
			
			for (r = 0; r < 9; r++)
			{
				box[r] = 0;
			}
			
			for (r = i; r < i + 3; r++)
			{
				for (c = j; c < j + 3; c++)
				{
					number = board[r][c] - 1;
					
					if (box[number])
					{
						return 0;
					}
					
					box[number] = 1;
				}
			}
		}
	}
	
	return 1;
}