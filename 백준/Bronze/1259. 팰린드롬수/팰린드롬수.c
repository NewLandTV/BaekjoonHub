#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int palindrome;
	char input[6];
	
	while (1)
	{
		scanf("%s", &input);
		
		if (input[0] == 48)
		{
			break;
		}
		
		palindrome = 1;
		
		for (i = 0; i < strlen(input) >> 1; i++)
		{
			if (input[i] != input[strlen(input) - i - 1])
			{
				palindrome = 0;
			}
		}
		
		printf("%s\n", palindrome ? "yes" : "no");
	}
	
	return 0;
}