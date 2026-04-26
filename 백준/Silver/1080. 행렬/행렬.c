#include <stdio.h>

char a[50][51], b[50][51];

void Reverse(int x, int y);

int main(void)
{
	int i, j;
	int n, m;
	int c = 0;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", a[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", b[i]);
	}
	
	for (i = 0; i < n - 2; i++)
	{
		for (j = 0; j < m - 2; j++)
		{
			if (a[i][j] != b[i][j])
			{
				Reverse(i, j);
				
				c++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (a[i][j] != b[i][j])
			{
				printf("-1");
				
				return 0;
			}
		}
	}
	
	printf("%d", c);
	
	return 0;
}

void Reverse(int x, int y)
{
	int i, j;
	
	for (i = x; i <= x + 2; i++)
	{
		for (j = y; j <= y + 2; j++)
		{
			a[i][j] = a[i][j] == '0' ? '1' : '0';
		}
	}
}