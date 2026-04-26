#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int m;
	int s;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		printf("Case %d:\n", i);
		scanf("%d", &m);
		
		while (m--)
		{
			scanf("%d", &s);
			
			s++;
			
			if (1 <= s && s <= 6)
			{
				printf("%d\n", s);
			}
		}
	}
	
	return 0;
}