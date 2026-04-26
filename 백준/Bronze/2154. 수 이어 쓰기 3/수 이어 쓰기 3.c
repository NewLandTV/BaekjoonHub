#include <stdio.h>
#include <string.h>

void RevStr(char* str);
void IntToStr(int value, char* buffer);

int main(void)
{
	int i;
	int n;
	char s[488897], x[7];
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		sprintf(s + strlen(s), "%d", i);
	}
	
	IntToStr(n, x);
	printf("%d", (int)(strstr(s, x) - s) + 1);
	
	return 0;
}

void RevStr(char* str)
{
	int i = 0, j = strlen(str) - 1;
	char temp;
	
	while (i < j)
	{
		temp = str[i];
		str[i++] = str[j];
		str[j--] = temp;
	}
}

void IntToStr(int value, char* buffer)
{
	char* p = buffer;
	
	while (value)
	{
		*p++ = (value % 10) + '0';
		value /= 10;
	}
	
	*p = 0;
	RevStr(buffer);
}