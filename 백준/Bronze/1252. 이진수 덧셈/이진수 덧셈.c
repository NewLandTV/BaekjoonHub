#include <stdio.h>
#include <string.h>

char* LeftTrim(char* str, char c)
{
	char* start = str;
	
	while (*start != 0 && (unsigned char)*start == c)
	{
		start++;
	}
	
	if (start != str)
	{
		strcpy(str, start);
	}
	
	return str;
}

int main(void)
{
	int i;
	char a[81], b[81];
	char temp[81], x[81];
	int s1, s2;
	int c;
	
	scanf("%s %s", a, b);
	LeftTrim(a, '0');
	LeftTrim(b, '0');
	
	if (strlen(a) == 0 && strlen(b) == 0)
	{
		printf("0");
		
		return 0;
	}
	
	if (strlen(a) < strlen(b))
	{
		strcpy(temp, a);
		strcpy(a, b);
		strcpy(b, temp);
	}
	
	for (i = 0; i < strlen(a) - strlen(b); x[i++] = '0');
	
	x[i] = 0;
	
	sprintf(temp, "%s%s", x, b);
	strcpy(b, temp);
	
	temp[strlen(a)] = 0;
	
	for (i = strlen(a) - 1, c = 0; i >= 0; i--)
	{
		s1 = a[i] == '1';
		s2 = b[i] == '1';
		
		if (s1 + s2 + c == 3)
		{
			temp[i] = '1';
		}
		else if (s1 + s2 + c == 2)
		{
			c = 1;
			temp[i] = '0';
		}
		else if (s1 + s2 + c == 1)
		{
			c = 0;
			temp[i] = '1';
		}
		else if (s1 + s2 + c == 0)
		{
			c = 0;
			temp[i] = '0';
		}
	}
	
	if (c == 1)
	{
		printf("1%s", temp);
	}
	else
	{
		printf("%s", temp);
	}
	
	return 0;
}