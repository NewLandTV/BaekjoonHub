#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[33];
	int diff = 0;
	
	scanf("%s", s);
	
	diff = strlen(s);
	
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == ':')
		{
			diff++;
		}
		else if (s[i] == '_')
		{
			diff += 5;
		}
	}
	
	printf("%d", diff);
	
	return 0;
}