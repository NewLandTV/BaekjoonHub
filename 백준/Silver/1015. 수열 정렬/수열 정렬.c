#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int a[50];
	int sort[50] = { 0, };
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[i])
			{
				sort[j]++;
			}
			else
			{
				sort[i]++;
			}
		}
	}
	
	for (i = 0; i < n; i++)
	{
		printf("%d ", sort[i]);
	}
	
	return 0;
}