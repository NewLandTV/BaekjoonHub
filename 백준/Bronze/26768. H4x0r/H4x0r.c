#include <stdio.h>

int main(void)
{
	char c;
	
	while (1)
	{
		c = getchar();
		
		if (c == '\n')
		{
			break;
		}
		
		switch (c)
		{
		case 'a':
			c = '4';
			
			break;
		case 'e':
			c = '3';
			
			break;
		case 'i':
			c = '1';
			
			break;
		case 'o':
			c = '0';
			
			break;
		case 's':
			c = '5';
			
			break;
		default:
			break;
		}
		
		printf("%c", c);
	}
	
	return 0;
}