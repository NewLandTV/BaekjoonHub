#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	char s[100], bin[100];
	int x;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %s", &n, s);
		
		for (i = 0; i < n; i++)
		{
			scanf("%s", bin);
			
			for (j = x = 0; j < strlen(bin); j++)
			{
				x = x * 2 + 1;
				
				if (bin[j] == '1')
				{
					x++;
				}
				
				if (s[x] != '*')
				{
					printf("%c", s[x]);
					
					x = 0;
				}
			}
			
			printf(" ");
		}
		
		printf("\n");
	}
	
	return 0;
}