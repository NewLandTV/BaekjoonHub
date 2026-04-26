#include <stdio.h>

int main(void)
{
	int a1, a2, a3;
	int g;
	int next;
	int isAP;
	
	while (1)
	{
		scanf("%d %d %d", &a1, &a2, &a3);
		
		if (a1 == 0 && a2 == 0 && a3 == 0)
		{
			break;
		}
		
		g = a2 - a1;
		
		if (a3 - g == a2)
		{
			isAP = 1;
			next = a3 + g;
		}
		else
		{
			isAP = 0;
			g = a2 / a1;
			next = a3 * g;
		}
		
		printf("%s %d\n", isAP ? "AP" : "GP", next);
	}
	
	return 0;
}