#include <stdio.h>

int main(void)
{
	char c;
	int count = 0;
	
	while (1)
	{
		c = getchar();
		
		if (c == '#')
		{
			break;
		}
		
		switch (c)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			count++;
			
			break;
		case '.':
		case '!':
		case '?':
			printf("%d\n", count);
			
			count = 0;
			
			break;
		}
	}
	
	return 0;
}