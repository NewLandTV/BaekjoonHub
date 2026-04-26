#include <stdio.h>

int main(void)
{
	int t;
	int n;
	int s;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (s = n * n; n > 0;)
		{
			if (s % 10 != n % 10)
			{
				printf("NO\n");
				
				break;
			}
			
			s /= 10;
			n /= 10;
		}
		
		if (n == 0)
		{
			printf("YES\n");
		}
	}
	
	return 0;
}