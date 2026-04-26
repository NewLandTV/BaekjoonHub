#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
	char str[1001];
	char* ptr;
	char first;
	char isTautogram;
	
	while (1)
	{
		scanf(" %[^\n]s", str);
		
		if (str[0] == '*')
		{
			break;
		}
		
		isTautogram = 'Y';
		ptr = strtok(str, " ");
		first = toupper(ptr[0]);
		
		while ((ptr = strtok(NULL, " ")) != NULL)
		{
			if (first != toupper(ptr[0]))
			{
				isTautogram = 'N';
				
				break;
			}
			
			first = toupper(ptr[0]);
		}
		
		printf("%c\n", isTautogram);
	}
	
	return 0;
}