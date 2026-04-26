#include <stdio.h>

int main(void)
{
	int i;
	int t;
	int n;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d", &n);
		
		for (i = 0; i < 20; i++)
		{
			if (n & 1 << i)
			{
				printf("%d ", i);
			}
		}
		
		printf("\n");
	}
	
	return 0;
}