#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int t;
	int p;
	char s[81];
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %s", &p, s);
		
		for (i = 0; i < strlen(s); i++)
		{
			if (i + 1 == p)
			{
				continue;
			}
			
			printf("%c", s[i]);
		}
		
		printf("\n");
	}
	
	return 0;
}