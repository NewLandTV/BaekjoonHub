#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int t;
	int day, hour = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			hour += 8;
		}
		
		scanf("%d", &t);
		
		hour += t;
	}
	
	day = hour / 24;
	hour -= day * 24;
	
	printf("%d %d", day, hour);
	
	return 0;
}