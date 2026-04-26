#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char str[23];
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%s", str);
		
		if (strcmp(str, "Algorithm") == 0)
		{
			puts("204");
		}
		else if (strcmp(str, "DataAnalysis") == 0)
		{
			puts("207");
		}
		else if (strcmp(str, "ArtificialIntelligence") == 0)
		{
			puts("302");
		}
		else if (strcmp(str, "CyberSecurity") == 0)
		{
			puts("B101");
		}
		else if (strcmp(str, "Network") == 0)
		{
			puts("303");
		}
		else if (strcmp(str, "Startup") == 0)
		{
			puts("501");
		}
		else if (strcmp(str, "TestStrategy") == 0)
		{
			puts("105");
		}
	}
	
	return 0;
}