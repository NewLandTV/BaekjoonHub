#include <stdio.h>

int main(void)
{
	int i;
	int x, y;
	int date = 0;
	
	scanf("%d %d", &x, &y);
	
	date += y;
	
	for (i = 1; i < x; i++)
	{
		if (i == 2)
		{
			date += 28;
			
			continue;
		}
		
		if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			date += 30;
			
			continue;
		}
		
		date += 31;
	}
	
	switch (date % 7)
	{
		case 0:
			printf("SUN");
			
			break;
		case 1:
			printf("MON");
			
			break;
		case 2:
			printf("TUE");
			
			break;
		case 3:
			printf("WED");
			
			break;
		case 4:
			printf("THU");
			
			break;
		case 5:
			printf("FRI");
			
			break;
		case 6:
			printf("SAT");
			
			break;
	}
	
	return 0;
}