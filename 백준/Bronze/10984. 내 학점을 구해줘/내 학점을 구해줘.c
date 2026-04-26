#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, j;
	int t;
	int n;
	int c;
	float g;
	int sum;
	float x;
	
	scanf("%d", &t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		
		for (j = 0, sum = 0, x = 0.0f; j < n; j++)
		{
			scanf("%d %f", &c, &g);
			
			sum += c;
			x += c * g;
		}
		
		printf("%d %f\n", sum, ceil(x / sum * 10) / 10);
	}
	
	return 0;
}