#include <stdio.h>

int main(void)
{
	int i, j;
	char c;
	
	for (i = 0; i < 15; i++)
	{
		for (j = 0; j < 15; j++)
		{
			scanf(" %c", &c);
			
			switch (c)
			{
			case 'w':
				printf("chunbae");
				
				return 0;
			case 'b':
				printf("nabi");
				
				return 0;
			case 'g':
				printf("yeongcheol");
				
				return 0;
			}
		}
	}
	
	return 0;
}