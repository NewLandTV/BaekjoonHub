#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char str[81];
	
	while (1)
	{
		gets(str);
		
		if (strcmp(str, "***") == 0)
		{
			break;
		}
		
		for (i = strlen(str) - 1; i >= 0; i--)
		{
			fputc(str[i], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}