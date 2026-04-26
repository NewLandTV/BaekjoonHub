#include <stdio.h>

int main(void)
{
	int i;
	char s[201];
	int alpha[26];
	int sum;
	
	while (1)
	{
		scanf(" %[^\n]s", s);
		
		if (s[0] == '*')
		{
			break;
		}
		
		sum = 0;
		
		for (i = 0; i < 26; i++)
		{
			alpha[i] = 0;
		}
		
		for (i = 0; s[i]; i++)
		{
			if (s[i] == ' ')
			{
				continue;
			}
			
			if (alpha[s[i] - 'a'] == 0)
			{
				alpha[s[i] - 'a']++;
				sum++;
			}
		}
		
		printf("%c\n", sum == 26 ? 'Y' : 'N');
	}
	
	return 0;
}