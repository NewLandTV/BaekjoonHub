#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int g;
	int a[1000];
	
	scanf("%d", &n);
	
	for (; n > 0; n--)
	{
		scanf("%d", &g);
		
		for (i = 0; i < g; i++)
		{
			scanf("%d", &a[i]);
		}
		
		for (i = 1; i < g - 1; i++)
		{
			if (a[i - 1] <= a[i + 1] && (a[i] <= a[i - 1] || a[i] >= a[i + 1]))
			{
				printf("%d\n", i + 1);
				
				break;
			}
		}
	}
	
	return 0;
}