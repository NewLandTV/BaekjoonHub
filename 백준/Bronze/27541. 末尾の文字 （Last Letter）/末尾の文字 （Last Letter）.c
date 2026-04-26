#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	char s[101];
	int index;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	index = strlen(s) - 1;
	
	if (s[index] == 'G')
	{
		s[index] = 0;
	}
	else
	{
		s[index + 1] = 'G';
	}
	
	printf("%s", s);
	
	return 0;
}