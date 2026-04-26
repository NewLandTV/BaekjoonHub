#include <stdio.h>

int main(void)
{
	int i, j;
	int k;
	int n, s, d;
	int di, vi;
	int x;
	
	scanf("%d", &k);
	
	for (i = 1; i <= k; i++)
	{
		scanf("%d %d %d", &n, &s, &d);
		
		x = 0;
		
		for (j = 0; j < n; j++)
		{
			scanf("%d %d", &di, &vi);
			
			if (s * d >= di)
			{
				x += vi;
			}
		}
		
		printf("Data Set %d:\n", i);
		printf("%d\n\n", x);
	}
	
	return 0;
}