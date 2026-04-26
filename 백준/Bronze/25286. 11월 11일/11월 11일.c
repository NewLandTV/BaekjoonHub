#include <stdio.h>

#define IsLeap(y) ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)

int main(void)
{
	int t;
	int y, m;
	int day;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &y, &m);
		
		if (m == 1)
		{
			y--;
			m = 13;
		}
		
		switch (--m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			
			break;
		default:
			day = 28 + IsLeap(y);
			
			break;
		}
		
		printf("%d %d %d\n", y, m, day);
	}
	
	return 0;
}