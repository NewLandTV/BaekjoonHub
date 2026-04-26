#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	char s[14];
	int index = -1;
	
	scanf("%s", s);
	
	if (s[0] == 'x')
	{
		printf("1");
		
		return 0;
	}
	
	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == 'x')
		{
			index = i;
		}
	}
	
	if (index == -1)
	{
		printf("0");
		
		return 0;
	}
	
	if (s[index - 1] == '+')
	{
		printf("1");
		
		return 0;
	}
	
	if (s[index - 1] == '-')
	{
		printf("-1");
		
		return 0;
	}
	
	for (i = 0; i < index; i++)
	{
		printf("%c", s[i]);
	}
	
	return 0;
}