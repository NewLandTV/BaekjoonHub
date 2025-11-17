#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int t;
	int w, h;
	char s[12];
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &w, &h);
		
		for (i = 0; i < w; i++)
		{
			scanf(" %s", s);
			
			for (j = strlen(s) - 1; j >= 0; j--)
			{
				printf("%c", s[j]);
			}
			
			printf("\n");
		}
	}
	
	return 0;
}