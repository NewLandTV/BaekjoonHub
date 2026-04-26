#include <stdio.h>

int main(void)
{
	int i;
	int k;
	int n;
	int t;
	char z;
	int time = 210;
	
	scanf("%d", &k);
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		scanf("%d %c", &t, &z);
		
		time -= t;
		
		if (time <= 0)
		{
			printf("%d", k);
			
			return 0;
		}
		
		if (z == 'T')
		{
			k++;
			
			if (k == 9)
			{
				k = 1;
			}
		}
	}
	
	return 0;
}