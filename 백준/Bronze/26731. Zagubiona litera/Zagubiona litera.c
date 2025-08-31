#include <stdio.h>

int main(void)
{
	int i, alphabet[26] = { 0, };
	char s[26];
	
	scanf("%s", s);
	
	for (i = 0; i < 25; i++)
	{
		alphabet[s[i] - 'A'] = 1;
	}
	
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] == 0)
		{
			printf("%c", i + 'A');
			
			return 0;
		}
	}
	
	return 0;
}