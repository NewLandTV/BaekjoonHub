#include <stdio.h>

int main(void)
{
	int t;
	int time;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &time);
		
		if (time % 25 < 17)
		{
			printf("ONLINE\n");
		}
		else
		{
			printf("OFFLINE\n");
		}
	}
	
	return 0;
}