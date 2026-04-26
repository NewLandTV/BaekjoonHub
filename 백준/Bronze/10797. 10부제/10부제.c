#include <stdio.h>

int main(void)
{
	int i;
	int day;
	int car;
	int count = 0;
	
	scanf("%d", &day);
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &car);
		
		if (day == car)
		{
			count++;
		}
	}
	
	printf("%d", count);
	
	return 0;
}