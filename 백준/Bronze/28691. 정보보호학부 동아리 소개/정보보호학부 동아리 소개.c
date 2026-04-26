#include <stdio.h>

int main(void)
{
	char c;
	
	scanf("%c", &c);
	
	switch (c)
	{
	case 'M':
		printf("MatKor");
		
		break;
	case 'W':
		printf("WiCys");
		
		break;
	case 'C':
		printf("CyKor");
		
		break;
	case 'A':
		printf("AlKor");
		
		break;
	case '$':
		printf("$clear");
		
		break;
	}
	
	return 0;
}