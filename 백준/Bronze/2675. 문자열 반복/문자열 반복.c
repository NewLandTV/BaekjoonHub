#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int j;
	int k;
	int r;
	int t;
	char s[21];
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d %s", &r, s);
		
		for (j = 0; j < strlen(s); j++)
		{
			for (k = 0; k < r; k++)
			{
				printf("%c", s[j]);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}