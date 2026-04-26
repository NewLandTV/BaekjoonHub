#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{
	int i, j, k;
	int n;
	int x[101], y[101];
	int area = 0;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (i == j || i == k || j == k || x[i] != x[j] || y[i] != y[k])
				{
					continue;
				}
				
				area = Max(area, Abs(y[i] - y[j]) * Abs(x[i] - x[k]));
			}
		}
	}
	
	printf("%d", area);
	
	return 0;
}