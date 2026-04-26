#include <stdio.h>

int main(void)
{
	int n, m;
	int i, j;
	int k, l, o;
	int temp;
	int basket[101];
	
	scanf("%d %d", &n, &m);
	
	for (k = 1; k <= n; k++)
	{
		basket[k] = k;
	}
	
	for (k = 0; k < m; k++)
	{
		scanf("%d %d", &i, &j);
		
		for (l = i, o = j; l < o; l++, o--)
		{
			temp = basket[l];
			basket[l] = basket[o];
			basket[o] = temp;
		}
	}
	
	for (k = 1; k <= n; k++)
	{
		printf("%d ", basket[k]);
	}
	
	return 0;
}