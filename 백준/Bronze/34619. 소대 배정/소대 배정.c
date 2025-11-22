#include <stdio.h>

int main(void)
{
	int l;
	int a, b, n, k;
	int i = 1, j = 1;
	
	scanf("%d %d %d %d", &a, &b, &n, &k);
	
	for (l = 0; l < k; l++)
	{
		if (l != 0 && l % n == 0)
		{
			j++;
		}
		
		if (j % (b + 1) == 0)
		{
			j = 1;
			i++;
		}
	}
	
	printf("%d %d", i, j);
	
	return 0;
}