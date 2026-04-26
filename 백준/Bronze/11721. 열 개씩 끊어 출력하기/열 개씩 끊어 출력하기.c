#include <stdio.h>

int main(void)
{
	int i, j;
	char input[101];
	
	scanf("%s", input);
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (input[i * 10 + j] == 0)
			{
				i = 10;
				
				break;
			}
			
			fputc(input[i * 10 + j], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}