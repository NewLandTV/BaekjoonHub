#include <stdio.h>

int main(void)
{
	int i;
	int t;
	char s[1001];
	int alphabet[26];
	int sum;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%s", s);
		
		sum = 0;
		
		for (i = 0; i < 26; i++)
		{
			alphabet[i] = 0;
		}
		
		for (i = 0; s[i]; i++)
		{
			alphabet[s[i] - 'A'] = 1;
		}
		
		for (i = 0; i < 26; i++)
		{
			if (alphabet[i] == 0)
			{
				sum += i + 'A';
			}
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}