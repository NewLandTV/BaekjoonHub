#include <stdio.h>

int main(void)
{
	char s;
	
	scanf("%c", &s);
	
	switch (s)
	{
	case 'N':
		printf("North London Collegiate School");
		
		break;
	case 'B':
		printf("Branksome Hall Asia");
		
		break;
	case 'K':
		printf("Korea International School");
		
		break;
	case 'S':
		printf("St. Johnsbury Academy");
		
		break;
	}
	
	return 0;
}