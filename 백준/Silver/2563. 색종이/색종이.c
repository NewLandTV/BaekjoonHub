#include <stdio.h>

int main(void)
{
	int i, j, k;
	int x, y;
	int count;
	int result = 0;
	int array[100][100] = { 0, };
	
	scanf("%d", &count);
	
	for (i = 0; i < count; i++)
	{
		scanf("%d %d", &x, &y);
		
		for (j = x; j < x + 10; j++)
		{
			for (k = 99 - y; k >= 90 - y; k--)
			{
				if (array[j][k] == 0)
				{
					array[j][k] = 1;
					result++;
				}
			}
		}
	}
	
	printf("%d", result);
	
	return 0;
}