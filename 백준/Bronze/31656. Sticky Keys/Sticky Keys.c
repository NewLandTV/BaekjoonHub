#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[1001];
	
	scanf("%[^\n]s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] != s[i + 1])
		{
			printf("%c", s[i]);
		}
	}
	
	return 0;
}