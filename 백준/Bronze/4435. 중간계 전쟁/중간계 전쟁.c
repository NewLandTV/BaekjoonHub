#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int gandalf = 0, sauron = 0;
	int g[6] = { 1, 2, 3, 3, 4, 10 };
	int s[7] = { 1, 2, 2, 2, 3, 5, 10 };
	int x;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		gandalf = 0;
		sauron = 0;
		
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &x);
			
			gandalf += x * g[j];
		}
		
		for (j = 0; j < 7; j++)
		{
			scanf("%d", &x);
			
			sauron += x * s[j];
		}
		
		printf("Battle %d: ", i);
		
		if (gandalf == sauron)
		{
			printf("No victor on this battle field\n");
			
			continue;
		}
			
		printf("%s\n", gandalf > sauron ? "Good triumphs over Evil" : "Evil eradicates all trace of Good");
	}
	
	return 0;
}