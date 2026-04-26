#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int m;
	int list[15000];
	int count = 0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &list[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (list[i] + list[j] == m)
			{
				count++;
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}