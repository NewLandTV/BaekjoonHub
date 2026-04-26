#include <stdio.h>
#include <memory.h>

#define Min(a, b) (a < b ? a : b)
#define Max(a, b) (a > b ? a : b)

int main(void)
{
	int i;
	int n, q;
	int* x;
	int d, ca, xb;
	int min, max;
	
	scanf("%d %d", &n, &q);
	
	x = (int*)malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x[i]);
	}
	
	for (i = 0; i < q; i++)
	{
		scanf("%d %d %d", &d, &ca, &xb);
		
		if (d == 2)
		{
			min = Min(x[ca - 1], x[xb - 1]);
			max = Max(x[ca - 1], x[xb - 1]);
			
			printf("%d\n", max - min);
			
			continue;
		}
		
		x[ca - 1] = xb;
	}
	
	free(x);
	
	return 0;
}