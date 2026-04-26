#include <stdio.h>

int main(void)
{
	int i, j, l, m, o;
	int t;
	int n, k;
	int a[50], b[50], c[50], d[50];
	int cnt;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d %d", &n, &k);
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[j]);
		}
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[j]);
		}
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &c[j]);
		}
		
		for (j = 0; j < n; j++)
		{
			scanf("%d", &d[j]);
		}
		
		for (j = cnt = 0; j < n; j++)
		{
			for (l = 0; l < n; l++)
			{
				for (m = 0; m < n; m++)
				{
					for (o = 0; o < n; o++)
					{
						if ((a[j] ^ b[l] ^ c[m] ^ d[o]) == k)
						{
							cnt++;
						}
					}
				}
			}
		}
		
		printf("Case #%d: %d\n", i, cnt);
	}
	
	return 0;
}