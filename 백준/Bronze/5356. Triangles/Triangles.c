#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	char c;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %c", &n, &c);
		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%c", c);
			}
			
			if (++c > 'Z')
			{
				c = 'A';
			}
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}