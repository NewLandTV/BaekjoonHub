#include <stdio.h>

#define Intensity(r, g, b) (r * 2126 + g * 7152 + b * 722)

int main(void)
{
	int x, y;
	int n, m;
	int r, g, b;
	int res;
	char ch;
	
	scanf("%d %d", &n, &m);
	
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < m; x++)
		{
			scanf("%d %d %d", &r, &g, &b);
			
			res = Intensity(r, g, b);
			
			if (res < 510000)
			{
				ch = '#';
			}
			else if (res < 1020000)
			{
				ch = 'o';
			}
			else if (res < 1530000)
			{
				ch = '+';
			}
			else if (res < 2040000)
			{
				ch = '-';
			}
			else if (res >= 2040000)
			{
				ch = '.';
			}
			
			fputc(ch, stdout);
		}
		
		fputc('\n', stdout);
	}
	
	return 0;
}