#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[1000001];
	int one = 0, zero = 0;
	
	scanf("%s", s);
	
	for (i = 0; i < strlen(s) - 1; i++)
	{
		if (s[i] == '1' && s[i + 1] == '0')
		{
			one++;
		}
		else if (s[i] == '0' && s[i + 1] == '1')
		{
			zero++;
		}
	}
	
	if (s[i] == '0')
	{
		zero++;
	}
	else if (s[i] == '1')
	{
		one++;
	}
	
	printf("%d", one > zero ? zero : one);
	
	return 0;
}