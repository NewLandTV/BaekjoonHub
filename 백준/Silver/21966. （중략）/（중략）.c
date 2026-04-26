#include <stdio.h>
#include <string.h>

void SubStr(char* dest, const char* str, int start, int length);

int main(void)
{
	int i;
	int n;
	char s[100001], a[12], b[12];
	int ok = 0;
	
	scanf("%d", &n);
	scanf("%s", s);
	
	if (n <= 25)
	{
		printf("%s", s);
		
		return 0;
	}
	
	for (i = 12; i < n - 12; i++)
	{
		if (s[i] == '.')
		{
			ok = 1;
		}
	}
	
	if (ok)
	{
		SubStr(a, s, 0, 9);
		SubStr(b, s, n - 10, 10);
		printf("%s......%s", a, b);
	}
	else
	{
		SubStr(a, s, 0, 11);
		SubStr(b, s, n - 11, 11);
		printf("%s...%s", a, b);
	}
	
	return 0;
}

void SubStr(char* dest, const char* str, int start, int length)
{
	strncpy(dest, str + start, length);
	
	dest[length] = 0;
}