#include <stdio.h>

int main(void)
{
	int t;
	int n;
	int x, k;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		if (n <= 5)
		{
			printf("MIT time\n");
			
			continue;
		}
		
		for (x = 1, k = 1; (x *= 5) < n; k++);
		
		printf("MIT^%d time\n", k);
	}
	
	return 0;
}