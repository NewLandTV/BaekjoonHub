#include <stdio.h>
#include <string.h>

void ReverseString(char* str, int length);

int main(void)
{
	int i;
	char s[1000];
	char t[1001];
	int len;
	int q = 1;
	
	scanf("%s", s);
	scanf("%s", t);
	
	len = strlen(t);
	
	while (1)
	{	
		if (t[len - 1] == 'A')
		{
			len--;
		}
		else if (t[len - 1] == 'B')
		{
			ReverseString(t, --len);
		}
		
		if (strlen(s) != len)
		{
			continue;
		}
		
		for (i = 0; i < len; i++)
		{
			if (s[i] != t[i])
			{
				q = 0;
				
				break;
			}
		}
		
		break;
	}
	
	printf("%d", q);
	
	return 0;
}

void ReverseString(char* str, int length)
{
	int i;
	char temp;
	
	for (i = 0; i < length >> 1; i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
}