#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int count;
	char input[100];
	
	gets(input);
	
	count = strlen(input);
	
	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] == '=')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 's')
			{
				count--;
			}
			else if (input[i - 1] == 'z')
			{
				count--;
				
				if (input[i - 2] == 'd')
				{
					count--;
				}
			}
		}
		else if (input[i] == '-' && (input[i - 1] == 'c' || input[i - 1] == 'd'))
		{
			count--;
		}
		else if (input[i] == 'j' && (input[i - 1] == 'l' || input[i - 1] == 'n'))
		{
			count--;
		}
	}
	
	printf("%d", count);
	
	return 0;
}