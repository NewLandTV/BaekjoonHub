#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char name[51];
	int numAlphabet[26] = { 0, };
	int numOdd = 0;
	char oddChar;
	
	scanf("%s", name);
	
	for (i = 0; i < strlen(name); i++)
	{
		numAlphabet[name[i] - 'A']++;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (numAlphabet[i] == 0)
		{
			continue;
		}
		
		if (numAlphabet[i] & 1)
		{
			numOdd++;
			oddChar = 'A' + i;
		}
	}
	
	if (numOdd > 1)
	{
		printf("I'm Sorry Hansoo");
		
		return 0;
	}
	
	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < numAlphabet[i] >> 1; j++)
		{
			printf("%c", 'A' + i);
		}
	}
	
	if (numOdd & 1)
	{
		printf("%c", oddChar);
	}
	
	for (i = 25; i >= 0; i--)
	{
		for (j = 0; j < numAlphabet[i] >> 1; j++)
		{
			printf("%c", 'A' + i);
		}
	}
	
	return 0;
}