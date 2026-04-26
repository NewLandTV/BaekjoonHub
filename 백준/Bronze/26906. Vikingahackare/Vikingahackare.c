#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int t;
	char c[16], s[16][5];
	char n[4001], sub[5];
	int ok;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf(" %c %s", &c[i], s[i]);
	}
	
	scanf("%s", n);
	
	for (i = 0; i < strlen(n); i += 4)
	{
		strncpy(sub, n + i, 4);
		
		for (j = ok = 0; j < t; j++)
		{
			if (strcmp(sub, s[j]) == 0)
			{
				printf("%c", c[j]);
				
				ok = 1;
				
				break;
			}
		}
		
		if (!ok)
		{
			printf("?");
		}
	}
	
	return 0;
}