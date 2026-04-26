#include <stdio.h>

int main(void)
{
	int t, x;
	int n;
	int k, a;
	int yes;
	
	scanf("%d %d", &t, &x);
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &k);
		
		yes = 0;
		
		while (k--)
		{
			scanf("%d", &a);
			
			if (a == x)
			{
				yes = 1;
				
				rewind(stdin);
				
				break;
			}
		}
		
		if (yes == 0)
		{
			printf("NO");
			
			return 0;
		}
	}
	
	printf("YES");
	
	return 0;
}