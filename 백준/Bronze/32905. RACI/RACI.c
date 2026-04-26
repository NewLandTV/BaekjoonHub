#include <stdio.h>

int main(void)
{
	int i;
	int n, m;
	char p[101];
	int a;
	
	scanf("%d %d", &n, &m);
	
	while (n--)
	{
		for (i = 0; i < m; i++)
		{
			scanf(" %c", &p[i]);
		}
		
		for (a = i = 0; i < m; i++)
		{
			if (p[i] == 'A')
			{
				if (a == 1)
				{
					a = 0;
					
					break;
				}
				
				a = 1;
			}
		}
		
		if (a == 0)
		{
			printf("No");
			
			return 0;
		}
	}
	
	printf("Yes");
	
	return 0;
}