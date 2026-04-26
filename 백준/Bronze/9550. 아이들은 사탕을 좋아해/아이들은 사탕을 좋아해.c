#include <stdio.h>

int main(void)
{
	int t;
	int n, k;
	int c, x;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &n, &k);
		
		for (x = 0; n--;)
		{
			scanf("%d", &c);
			
			x += c / k;
		}
		
		printf("%d\n", x);
	}
	
	return 0;
}