#include <stdio.h>

int main(void)
{
	char s[8];
	
	scanf("%s", s);
	
	switch (s[0])
	{
		case 'F':
			printf("Foundation");
			
			break;
		case 'C':
			printf("Claves");
			
			break;
		case 'V':
			printf("Veritas");
			
			break;
		case 'E':
			printf("Exploration");
			
			break;
	}
	
	return 0;
}