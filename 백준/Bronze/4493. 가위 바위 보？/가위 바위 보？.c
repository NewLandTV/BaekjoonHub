#include <stdio.h>

int main(void)
{
	int t;
	int n;
	char p1, p2;
	int c1, c2;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		c1 = c2 = 0;
		
		for (scanf("%d", &n); n > 0; n--)
		{
			scanf(" %c %c", &p1, &p2);
			
			if (p1 == p2)
			{
				continue;
			}
			
			(p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P') ? c1++ : c2++;
		}
		
		if (c1 == c2)
		{
			printf("TIE\n");
			
			continue;
		}
		
		printf("Player %d\n", c1 > c2 ? 1 : 2);
	}
	
	return 0;
}