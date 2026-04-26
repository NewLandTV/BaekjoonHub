#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[251];
	char c;
	int n;
	
	while (1)
	{
		scanf(" %c", &c);
		
		if (c == '#')
		{
			break;
		}
		
		scanf("%[^\n]s", s);
		
		for (i = n = 0; i < strlen(s); i++)
		{
			if (tolower(s[i]) == c)
			{
				n++;
			}
		}
		
		printf("%c %d\n", c, n);
	}
	
	return 0;
}