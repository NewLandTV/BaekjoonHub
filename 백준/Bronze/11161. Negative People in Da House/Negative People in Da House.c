#include <stdio.h>

#define Min(a, b) ((a) > (b) ? (b) : (a))

int main(void)
{
	int t;
	int m;
	int p1, p2;
	int sum;
	int min;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &m);
		
		for (sum = 0, min = 0; m > 0; m--)
		{
			scanf("%d %d", &p1, &p2);
			
			sum += p1 - p2;
			min = Min(min, sum);
		}
		
		printf("%d\n", -min);
	}
	
	return 0;
}