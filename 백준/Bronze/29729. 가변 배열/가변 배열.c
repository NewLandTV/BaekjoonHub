#include <stdio.h>

int main(void)
{
	int i;
	int s0, n, m;
	int c;
	int x = 0;
	
	scanf("%d %d %d", &s0, &n, &m);
	
	for (i = 0; i < n + m; i++)
	{
		scanf("%d", &c);
		
		if (c == 0)
		{
			x--;
			
			continue;
		}
		
		if (++x > s0)
		{
			s0 *= 2;
		}
	}
	
	printf("%d", s0);
	
	return 0;
}