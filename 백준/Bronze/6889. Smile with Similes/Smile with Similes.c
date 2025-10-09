#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int m;
	char s[5][6], p[5][6];
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%s", s[i]);
	}
	
	for (i = 0; i < m; i++)
	{
		scanf("%s", p[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%s as %s\n", s[i], p[j]);
		}
	}
	
	return 0;
}