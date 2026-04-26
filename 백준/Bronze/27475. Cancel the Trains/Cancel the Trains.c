#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n, m;
	int b[101], l[101];
	int cnt;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &n, &m);
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
		}
		
		for (i = 0; i < m; i++)
		{
			scanf("%d", &l[i]);
		}
		
		for (i = cnt = 0; i < n; i++)
		{
			for (j = 0; j < m; j++)
			{
				if (b[i] == l[j])
				{
					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}