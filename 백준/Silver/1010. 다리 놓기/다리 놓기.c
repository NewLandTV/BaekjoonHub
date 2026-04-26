#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n, m;
	int x;
	
	scanf("%d", &t);
	
	while (t--)
	{
		x = 1;
		
		scanf("%d %d", &n, &m);
		
		for (i = 0; i < n; i++)
		{
			x *= m - i;
			x /= 1 + i;
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}