#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int n;
	char s[500000], t[500000];
	int p;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s %s", s, t);
		
		for (j = 0; j < strlen(s); j++)
		{
			if (s[j] == 'x' || s[j] == 'X')
			{
				p = j;
				
				break;
			}
		}
		
		printf("%c", toupper(t[p]));
	}
	
	return 0;
}