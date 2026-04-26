#include <stdio.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	int a, b;
	
	scanf("%d", &t);
	
	for (j = 0; j < t; j++)
	{
		scanf("%d", &n);
		
		for (i = 0; i < n; i++)
		{
			scanf("%d %d", &a, &b);
			printf("%d %d\n", a + b, a * b);
		}
	}
	
	return 0;
}