#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char s[1001];
	int count = 0;
	
	scanf("%[^\n]s", s);
	
	for (i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
			case 'A':
			case 'a':
			case 'b':
			case 'D':
			case 'd':
			case 'e':
			case 'g':
			case 'O':
			case 'o':
			case 'P':
			case 'p':
			case 'Q':
			case 'q':
			case 'R':
			case '@':
				count++;
				
				break;
			case 'B':
				count += 2;
				
				break;
			default:
				break;
		}
	}
	
	printf("%d", count);
	
	return 0;
}