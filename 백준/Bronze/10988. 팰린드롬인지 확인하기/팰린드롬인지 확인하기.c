#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char input[101];
	
	scanf("%s", input);
	
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] != input[strlen(input) - i - 1])
		{
			putchar('0');
			
			return 0;
		}
	}
	
	putchar('1');
	
	return 0;
}