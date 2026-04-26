#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int c;
	int r = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c);
		
		if (r == 0)
		{
			r = c;
			
			continue;
		}
		
		r += c - 1;
	}
	
	printf("%d", r);
	
	return 0;
}