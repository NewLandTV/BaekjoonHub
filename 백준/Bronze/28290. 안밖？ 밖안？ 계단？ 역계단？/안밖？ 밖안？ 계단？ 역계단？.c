#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[9];
	
	scanf("%s", s);
	
	if (strcmp(s, "fdsajkl;") == 0 || strcmp(s, "jkl;fdsa") == 0)
	{
		printf("in-out");
	}
	else if (strcmp(s, "asdf;lkj") == 0 || strcmp(s, ";lkjasdf") == 0)
	{
		printf("out-in");
	}
	else if (strcmp(s, "asdfjkl;") == 0)
	{
		printf("stairs");
	}
	else if (strcmp(s, ";lkjfdsa") == 0)
	{
		printf("reverse");
	}
	else
	{
		printf("molu");
	}
	
	return 0;
}