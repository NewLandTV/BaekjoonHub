#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	int s;
	char words[1001];
	int c;
	int len;
	
	scanf("%d", &s);
	
	for (; s > 0; s--)
	{
		scanf(" %[^\n]s", words);
		
		for (i = 0, c = 0, len = 0; words[i]; i++)
		{
			switch (words[i])
			{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				c++;
				
				break;
			default:
				break;
			}
			
			if (words[i] != ' ')
			{
				len++;
			}
		}
		
		printf("%d %d\n", len - c, c);
	}
	
	return 0;
}