#include <stdio.h>
#include <string.h>

#define Min(a, b) ((a) > (b) ? (b) : (a))

int main(void)
{
	int i, j;
	int t;
	int x, y;
	char s[100001], f[27];
	int n;
	int a, b;
	
	scanf("%d", &t);
	
	for (x = 1; x <= t; x++)
	{
		y = 0;
		
		scanf("%s", s);
		scanf("%s", f);
		
		for (i = 0; i < strlen(s); i++)
		{
			n = 26;
			
			for (j = 0; j < strlen(f); j++)
			{
				a = s[i] - f[j];
				b = f[j] - s[i];
				
				if (a < 0)
				{
					a += 26;
				}
				else if (b < 0)
				{
					b += 26;
				}
				
				n = Min(n, Min(a, b));
			}
			
			y += n;
		}
		
		printf("Case #%d: %d\n", x, y);
	}
	
	return 0;
}