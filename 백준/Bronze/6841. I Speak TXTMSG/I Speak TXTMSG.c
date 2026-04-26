#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[6];
	
	while (1)
	{
		scanf("%s", input);
		
		if (strcmp(input, "TTYL") == 0)
		{
			printf("talk to you later");
			
			break;
		}
		else if (strcmp(input, "CU") == 0)
		{
			printf("see you\n");
		}
		else if (strcmp(input, ":-)") == 0)
		{
			printf("I’m happy\n");
		}
		else if (strcmp(input, ":-(") == 0)
		{
			printf("I’m unhappy\n");
		}
		else if (strcmp(input, ";-)") == 0)
		{
			printf("wink\n");
		}
		else if (strcmp(input, ":-P") == 0)
		{
			printf("stick out my tongue\n");
		}
		else if (strcmp(input, "(~.~)") == 0)
		{
			printf("sleepy\n");
		}
		else if (strcmp(input, "TA") == 0)
		{
			printf("totally awesome\n");
		}
		else if (strcmp(input, "CCC") == 0)
		{
			printf("Canadian Computing Competition\n");
		}
		else if (strcmp(input, "CUZ") == 0)
		{
			printf("because\n");
		}
		else if (strcmp(input, "TY") == 0)
		{
			printf("thank-you\n");
		}
		else if (strcmp(input, "YW") == 0)
		{
			printf("you’re welcome\n");
		}
		else
		{
			printf("%s\n", input);
		}
	}
	
	return 0;
}