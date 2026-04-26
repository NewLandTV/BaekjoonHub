#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int d = 0;
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &t);
		
		switch (t)
		{
			case 1:
				d = (d + 1) % 4;
				
				break;
			case 2:
				d = (d + 2) % 4;
				
				break;
			case 3:
				if (d == 0)
				{
					d = 4;
				}
				
				d--;
				
				break;
		}
	}
	
	switch (d)
	{
		case 0:
			printf("N");
			
			break;
		case 1:
			printf("E");
			
			break;
		case 2:
			printf("S");
			
			break;
		case 3:
			printf("W");
			
			break;
	}
	
	return 0;
}