#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char a[31], b[31];
	int col = -1, row = -1;
	
	scanf("%s %s", a, b);
	
	for (i = 0; i < strlen(a); i++)
	{
		for (j = 0; j < strlen(b); j++)
		{
			if (a[i] == b[j])
			{
				col = j;
				row = i;
				
				break;
			}
		}
		
		if (col != -1 && row != -1)
		{
			break;
		}
	}
	
	for (i = 0; i < strlen(b); i++)
	{
		if (i == col)
		{
			printf("%s\n", a);
			
			continue;
		}
		
		for (j = 0; j < strlen(a); j++)
		{
			printf("%c", j == row ? b[i] : '.');
		}
		
		printf("\n");
	}
	
	return 0;
}