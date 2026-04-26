#include <stdio.h>

int main(void)
{
	int i;
	char s[51];
	int x = 0, y = 0;
	
	scanf("%s", s);
	
	for (i = 0; s[i]; i++)
	{
		switch (s[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				x++;
				y++;
				
				break;
			case 'y':
				y++;
			default:
				break;
		}
	}
	
	printf("%d %d", x, y);
	
	return 0;
}