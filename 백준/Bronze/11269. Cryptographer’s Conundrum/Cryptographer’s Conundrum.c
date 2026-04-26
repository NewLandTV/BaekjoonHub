#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char board[301];
	char name[4] = "PER";
	int count = 0;
	
	scanf("%s", board);
	
	for (i = 0, j = 0; i < strlen(board); i++, j = (j + 1) % 3)
	{
		if (board[i] != name[j])
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}