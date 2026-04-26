#include <stdio.h>

int main(void)
{
	int i;
	int a, b, c, d;
	int x;
	
	for (i = 0; i < 3; i++)
	{
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		x = a + b + c + d;
		
		switch (x)
		{
		case 0:
			printf("D\n");
			
			break;
		case 1:
			printf("C\n");
			
			break;
		case 2:
			printf("B\n");
			
			break;
		case 3:
			printf("A\n");
			
			break;
		case 4:
			printf("E\n");
			
			break;
		}
	}
	
	return 0;
}