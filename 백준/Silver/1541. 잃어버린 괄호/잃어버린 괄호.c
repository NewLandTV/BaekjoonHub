#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	char s[51];
	char n[6];
	int len, first = 1, minus = 0, result = 0;
	
	scanf("%s", s);
	
	for (i = len = 0; i < strlen(s); i++)
	{
		if (!minus)
		{
			if (s[i] == '+')
			{
				result += atoi(n);
				len = -1;
			}
			else if (first && s[i] == '-')
			{
				first = 0;
				minus = 1;
				result += atoi(n);
				len = -1;
			}
			else if (s[i] == '-')
			{
				minus = 1;
				result -= atoi(n);
				len = -1;
			}
		}
		else if (s[i] == '+' || s[i] == '-')
		{
			result -= atoi(n);
			len = -1;
		}
		
		if (len == -1)
		{
			for (j = 0, len++; j < 5; j++)
			{
				n[j] = 0;
			}
			
			continue;
		}
		
		n[len++] = s[i];
	}
	
	if (minus)
	{
		result -= atoi(n);
	}
	else
	{
		result += atoi(n);
	}
	
	printf("%d", result);
	
	return 0;
}