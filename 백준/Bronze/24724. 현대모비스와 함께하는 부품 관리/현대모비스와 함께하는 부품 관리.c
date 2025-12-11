#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	int a, b;
	int u, v;
	
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		scanf("%d %d", &a, &b);
		
		while (n--)
		{
			scanf("%d %d", &u, &v);
		}
		
		printf("Material Management %d\n", i);
		printf("Classification ---- End!\n");
	}
	
	return 0;
}