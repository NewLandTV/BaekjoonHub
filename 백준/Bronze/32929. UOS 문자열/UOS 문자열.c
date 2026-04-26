#include <stdio.h>

int main(void)
{
	int x;
	char c;
	
	scanf("%d", &x);
	
	switch ((x - 1) % 3)
	{
	case 0:
		c = 'U';
		
		break;
	case 1:
		c = 'O';
		
		break;
	case 2:
		c = 'S';
		
		break;
	}
	
	printf("%c", c);
	
	return 0;
}