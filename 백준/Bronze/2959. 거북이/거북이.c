#include <stdio.h>

int main(void)
{
	int i, j;
	int a, b, c, d;
	int temp, l[4];
	
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &l[i]);
	}
	
	for (i = 3; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (l[j] < l[j + 1])
			{
				continue;
			}
			
			temp = l[j];
			l[j] = l[j + 1];
			l[j + 1] = temp;
		}
	}
	
	printf("%d", l[2] * l[0]);
	
	return 0;
}