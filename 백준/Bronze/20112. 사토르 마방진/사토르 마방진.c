#include <stdio.h>

int main(void)
{
	int i;
	int x, y;
	int n;
	char s[100][101];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf(" %s", s[i]);
	}
	
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			if (s[y][x] != s[x][y])
			{
				printf("NO");
				
				return 0;
			}
		}
	}
	
	printf("YES");
}