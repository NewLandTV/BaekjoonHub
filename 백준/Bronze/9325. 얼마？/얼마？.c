#include <stdio.h>

int main(void)
{
	int t;
	int s;
	int n;
	int q, p;
	int total;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &s);
		
		total = s;
		
		scanf("%d", &n);
		
		while (n--)
		{
			scanf("%d %d", &q, &p);
			
			total += q * p;
		}
		
		printf("%d\n", total);
	}
	
	return 0;
}