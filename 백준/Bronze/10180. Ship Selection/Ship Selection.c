#include <stdio.h>

int main(void)
{
	int t;
	int n, d;
	int v, f, c;
	int count;
	
	scanf("%d", &t);
	
	for (; t > 0; t--)
	{
		scanf("%d %d", &n, &d);
		
		count = 0;
		
		for (; n > 0; n--)
		{
			scanf("%d %d %d", &v, &f, &c);
			
			if (v * f / c >= d)
			{
				count++;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}