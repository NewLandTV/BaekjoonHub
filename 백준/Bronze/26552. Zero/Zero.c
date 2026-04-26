#include <stdio.h>

int main(void)
{
	int n;
	int k;
	int x, c;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &k);
		
		while (1)
		{
			for (x = ++k, c = 0; x != 0; x /= 10)
			{
				if (x % 10 == 0)
				{
					c++;
				}
			}
			
			if (c == 0)
			{
				printf("%d\n", k);
				
				break;
			}
		}
	}
	
	return 0;
}