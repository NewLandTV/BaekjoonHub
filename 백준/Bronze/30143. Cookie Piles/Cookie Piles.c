#include <stdio.h>

int main(void)
{
	int t;
	int n, a, d;
	int total;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d %d", &n, &a, &d);
		
		for (total = a; n > 1; n--)
		{
			total += a + d;
			a += d;
		}
		
		printf("%d\n", total);
	}
	
	return 0;
}