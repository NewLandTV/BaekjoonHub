#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a;
	int cur, max = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		
		cur = a - n + i;
		
		if (max < cur)
		{
			max = cur;
		}
	}
	
	printf("%d", max);
	
	return 0;
}