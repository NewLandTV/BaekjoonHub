#include <stdio.h>

int main(void)
{
	int n;
	char yesterdayParkingSpace[101], todayParkingSace[101];
	int count = 0;
	
	scanf("%d", &n);
	scanf("%s", yesterdayParkingSpace);
	scanf("%s", todayParkingSace);
	
	while (--n >= 0)
	{
		if (yesterdayParkingSpace[n] == 'C' && todayParkingSace[n] == 'C')
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}