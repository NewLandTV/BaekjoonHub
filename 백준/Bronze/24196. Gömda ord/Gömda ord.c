#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[51];
	
	scanf("%s", s);
	
	for (i = 0; i < strlen(s);)
	{
		fputc(s[i], stdout);
		
		i += s[i] - 'A' + 1;
	}
	
	return 0;
}