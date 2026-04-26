#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[1001];
	int count;
	
	scanf("%s", s);
	
	count = (strlen(s) - 2) * 2;
	
	fputc('h', stdout);
	
	for (i = 0; i < count; i++)
	{
		fputc('e', stdout);
	}
	
	fputc('y', stdout);
	
	return 0;
}