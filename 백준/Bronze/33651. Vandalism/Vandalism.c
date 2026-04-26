#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char s[4], *t = "UAPC";
	
	scanf("%s", s);
	
	for (i = 0; i < 4; i++)
	{
		if (strchr(s, t[i]) == NULL)
		{
			printf("%c", t[i]);
		}
	}
	
	return 0;
}