#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	int i, j, k;
	int l, o;
	int basket[100];
	
	memset(basket, 0, sizeof(int) * 100);
	scanf("%d %d", &n, &m);
	
	for (l = 0; l < m; l++)
	{
		scanf("%d %d %d", &i, &j, &k);
		
		for (o = i; o <= j; o++)
		{
			basket[o] = k;
		}
	}
	
	for (l = 1; l <= n; l++)
	{
		printf("%d ", basket[l]);
	}
	
	return 0;
}