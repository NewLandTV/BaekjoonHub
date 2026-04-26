#include <stdio.h>

int main(void)
{
	int i, j;
	int n, m;
	char a[100][101], b[100][101];
	int c;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", b[i]);
	}
	
	for (i = c = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] == b[i][j])
			{
				c++;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}