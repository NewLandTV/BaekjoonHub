#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int t;
	char g[101];
	char mappings[27] = "yhesocvxduiglbkrztnwjpfmaq";
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf(" %[^\n]s", g);
		printf("Case #%d: ", i);
		
		for (j = 0; j < strlen(g); j++)
		{	
			if (g[j] >= 'a' && g[j] <= 'z')
			{
				fputc(mappings[g[j] - 'a'], stdout);
				
				continue;
			}
			
			fputc(g[j], stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}