#include <stdio.h>

int main(void)
{
	char input;
	
	while (1)
	{
		input = getchar();
		
		if (input == '\n')
		{
			break;
		}
		
		printf("%c", input - 32);
	}
	
	return 0;
}