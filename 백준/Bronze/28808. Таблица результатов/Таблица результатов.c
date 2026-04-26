#include <stdio.h>

int main(void)
{
	int i, j;
	int n, m;
	char s[100][101];
	int c;
	
	scanf("%d %d", &n, &m);
	
	for (i = c = 0; i < n; i++)
	{
		scanf("%s", s[i]);
		
		for (j = 0; j < m; j++)
		{
			if (s[i][j] == '+')
			{
				c++;
				
				break;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}