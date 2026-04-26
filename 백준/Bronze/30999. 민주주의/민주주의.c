#include <stdio.h>

int main(void)
{
	int i;
	int n, m;
	char s[100];
	int x;
	int q = 0;
	
	scanf("%d %d", &n, &m);
	
	for (; n > 0; n--)
	{
		scanf("%s", s);
		
		for (i = 0, x = 0; i < m; i++)
		{
			if (s[i] == 'O')
			{
				x++;
			}
		}
		
		if (x >= m - (m >> 1))
		{
			q++;
		}
	}
	
	printf("%d", q);
	
	return 0;
}