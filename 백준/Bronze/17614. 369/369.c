#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int x, cnt;
	
	scanf("%d", &n);
	
	for (i = 1, j = 1, cnt = 0; i <= n; j = ++i)
	{
		while (j)
		{
			x = j % 10;
			
			if (x == 3 || x == 6 || x == 9)
			{
				cnt++;
			}
			
			j /= 10;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}