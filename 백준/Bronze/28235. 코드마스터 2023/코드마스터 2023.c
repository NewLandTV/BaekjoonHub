#include <stdio.h>

int main(void)
{
	char s;
	
	scanf("%c", &s);
	
	switch (s)
	{
	case 'S':
		printf("HIGHSCHOOL");
		
		break;
	case 'C':
		printf("MASTER");
		
		break;
	case '2':
		printf("0611");
		
		break;
	case 'A':
		printf("CONTEST");
		
		break;
	}
	
	return 0;
}