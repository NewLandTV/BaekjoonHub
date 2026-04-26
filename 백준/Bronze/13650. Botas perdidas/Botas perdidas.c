#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int m;
	char l;
	int d[31] = { 0, }, e[31] = { 0, };
	int cnt;
	
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d %c", &m, &l);
			
			if (l == 'D')
			{
				d[m - 30]++;
			}
			else
			{
				e[m - 30]++;
			}
		}
		
		for (i = cnt = 0; i < 31; i++)
		{
			for (; d[i] && e[i]; cnt++, d[i]--, e[i]--);
			
			d[i] = e[i] = 0;
		}
		
		printf("%d\n", cnt);
	}
	
	return 0;
}