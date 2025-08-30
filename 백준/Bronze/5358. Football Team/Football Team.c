#include <stdio.h>

int main(void)
{
	int i;
	int c;
	
	while (1)
	{
		c = getchar();
		
		switch (c)
		{
			case EOF:
				return 0;
			case 'i':
				fputc('e', stdout);
				
				break;
			case 'I':
				fputc('E', stdout);
				
				break;
			case 'e':
				fputc('i', stdout);
				
				break;
			case 'E':
				fputc('I', stdout);
				
				break;
			default:
				fputc(c, stdout);
				
				break;
		}
	}
	
	return 0;
}