#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a[101];
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		for (i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		
		while (n--)
		{
			printf("%d\n", a[n]);
		}
		
		printf("0\n");
	}
	
	return 0;
}