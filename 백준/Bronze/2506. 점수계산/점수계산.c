#include <stdio.h>

int main(void)
{
	int n;
	int r;
	int sum = 0;
	int l = 1;
	
	for (scanf("%d", &n); n > 0; n--)
	{
		scanf("%d", &r);
		
		if (r == 0)
		{
			l = 1;
			
			continue;
		}
		
		sum += l++;
	}
	
	printf("%d", sum);
	
	return 0;
}