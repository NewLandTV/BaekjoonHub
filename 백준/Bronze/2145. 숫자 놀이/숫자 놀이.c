#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char n[7];
	int x;
	
	while (1)
	{
		scanf("%s", n);
		
		if (n[0] == '0')
		{
			break;
		}
		
		while (1)
		{
			for (i = 0, x = 0; i < strlen(n); i++)
			{
				x += (n[i] - '0');
			}
			
			if (x < 10)
			{
				break;
			}
			
			sprintf(n, "%d", x);
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}