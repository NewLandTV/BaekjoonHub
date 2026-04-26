#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int w;
	int good;
	
	scanf("%d", &n);
	
	for (i = 0; i < 3; i++)
	{
		good = 0;
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &w);
			
			if (w == 7)
			{
				good = 1;
			}
		}
		
		if (good == 0)
		{
			printf("0");
			
			return 0;
		}
	}
	
	printf("777");
	
	return 0;
}