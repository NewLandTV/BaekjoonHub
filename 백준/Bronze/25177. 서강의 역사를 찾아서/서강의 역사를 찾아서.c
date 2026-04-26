#include <stdio.h>

#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i;
	int n, m;
	int a[1000] = { 0, }, b[1000] = { 0, };
	int max;
	int s = 0;
	
	scanf("%d %d", &n, &m);
	
	max = Max(n, m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	
	for (i = 0; i < max; i++)
	{
		if (b[i] - a[i] > s)
		{
			s = b[i] - a[i];
		}
	}
	
	printf("%d", s);
	
	return 0;
}