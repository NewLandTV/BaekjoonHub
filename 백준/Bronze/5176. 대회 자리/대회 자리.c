#include <stdio.h>

int main(void)
{
	int i;
	int k;
	int p, m;
	int a;
	int list[500];
	int count;
	
	scanf("%d", &k);
	
	while (k--)
	{
		scanf("%d %d", &p, &m);
		
		for (i = 0; i < 500; i++)
		{
			list[i] = 0;
		}
		
		count = p;
		
		for (i = 0; i < p; i++)
		{
			scanf("%d", &a);
			
			if (list[a - 1] == 0)
			{
				list[a - 1]++;
				count--;
			}
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}