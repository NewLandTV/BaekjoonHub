#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	char s[10][101], *max;
	int count;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		
		for (j = 0; j < n; j++)
		{
			scanf(" %[^\n]s", s[j]);
		}
		
		max = s[0];
		
		for (j = 1, count = 0; j < n; j++)
		{
			if (strcmp(s[j], max) < 0)
			{
				count++;
			}
			else
			{
				max = s[j];
			}
		}
		
		printf("Case #%d: %d\n", i, count);
	}
	
	return 0;
}