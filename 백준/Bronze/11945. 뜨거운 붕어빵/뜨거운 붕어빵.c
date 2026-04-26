#include <stdio.h>

void StringReverse(char* string, int length);

int main(void)
{
	int i;
	int n, m;
	char picture[10][11];
	
	scanf("%d %d", &n, &m);
	
	if (n == 0 || m == 0)
	{
		return 0;
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", picture[i]);
		StringReverse(picture[i], m);
	}
	
	for (i = 0; i < n; i++)
	{
		puts(picture[i]);
	}
	
	return 0;
}

void StringReverse(char* string, int length)
{
	int i;
	char temp;
	
	for (i = 0; i < length >> 1; i++)
	{
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
}