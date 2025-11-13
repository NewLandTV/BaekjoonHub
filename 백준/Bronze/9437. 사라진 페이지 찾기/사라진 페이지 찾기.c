#include <stdio.h>

int main(void)
{
	int i, j;
	int n, p;
	int page[3];
	int temp;
	
	while (1)
	{
		scanf("%d", &n);
		
		if (n == 0)
		{
			break;
		}
		
		scanf("%d", &p);
		
		if (p & 1)
		{
			page[0] = p + 1;
			page[1] = n - p;
			page[2] = n - p + 1;
		}
		else
		{
			page[0] = p - 1;
			page[1] = n - p + 1;
			page[2] = n - p + 2;
		}
		
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2 - i; j++)
			{
				if (page[j] <= page[j + 1])
				{
					continue;
				}
				
				temp = page[j];
				page[j] = page[j + 1];
				page[j + 1] = temp;
			}
		}
		
		printf("%d %d %d\n", page[0], page[1], page[2]);
	}
	
	return 0;
}