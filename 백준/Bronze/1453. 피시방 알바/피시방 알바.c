#include <stdio.h>

int main(void)
{
	int n;
	int k;
	int c[100] = { 0, };
	int count = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d", &k);
		
		if (c[k] == 1)
		{
			count++;
			
			continue;
		}
		
		c[k] = 1;
	}
	
	printf("%d", count);
	
	return 0;
}