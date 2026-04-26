#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int count = 0;
	
	scanf("%d", &n);
	
	for (i = 3; i < n; i += 3)
	{
		for (j = 3; j < n; j += 3)
		{
			if (i + j < n)
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}