#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[201];
	int a = 0, b = 0;
	
	scanf("%s", s);
	
	for (i = 0; i < strlen(s); i += 2)
	{
		if (s[i] == 'A')
		{
			a += s[i + 1] - '0';
		}
		else
		{
			b += s[i + 1] - '0';
		}
	}
	
	printf("%c", a > b ? 'A' : 'B');
	
	return 0;
}