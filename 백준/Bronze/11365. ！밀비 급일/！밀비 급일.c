#include <stdio.h>
#include <string.h>

void ReverseString(char* string);

int main(void)
{
	char input[501];
	
	while (1)
	{
		scanf("%[^\n]s", input);
		getchar();
		
		if (strcmp(input, "END") == 0)
		{
			return 0;
		}
		
		ReverseString(input);
		fputs(input, stdout);
		fputc('\n', stdout);
	}
	
	return 0;
}

void ReverseString(char* string)
{
	int i;
	int length = strlen(string);
	char temp;
	
	for (i = 0; i < length >> 1; i++)
	{
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
}