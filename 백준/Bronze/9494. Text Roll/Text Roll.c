#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	int n;
	char str[101];
	int x;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (i = 0, x = 0; i < n; i++)
		{
			scanf(" %[^\n]s", str);
			
			for (j = x; j < strlen(str); j++, x++)
			{
				if (str[j] == ' ')
				{
					break;
				}
			}
		}
		
		printf("%d\n", x + 1);
	}
	
	return 0;
}