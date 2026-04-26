#include <stdio.h>

int main(void)
{
	char firstPoint = 3, secondPoint = 0;
	char score[3];
	
	scanf("%s", score);
	
	switch (score[0])
	{
		case 'A':
		case 'B':
		case 'C':
		case 'D':
			switch (score[1])
			{
				case '+':
					firstPoint++;
					secondPoint = 3;
					
					break;
				case '0':
					firstPoint++;
					
					break;
				case '-':
					secondPoint = 7;
					
					break;
			}
			
			printf("%d.%d", firstPoint - (score[0] - 'A'), secondPoint);
			
			break;
		case 'F':
			printf("0.0");
			
			break;
	}
	
	return 0;
}