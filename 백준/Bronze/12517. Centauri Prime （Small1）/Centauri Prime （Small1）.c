#include <stdio.h>
#include <string.h>

int main(void)
{
	int t;
	int x;
	char c[21];
	int len;
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		scanf("%s", c);
		printf("Case #%d: %s is ruled by ", x, c);
		
		len = strlen(c);
		
		switch (c[len - 1])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("a queen");
				
				break;
			case 'y':
				printf("nobody");
				
				break;
			default:
				printf("a king");
				
				break;
		}
		
		printf(".\n");
	}
	
	return 0;
}