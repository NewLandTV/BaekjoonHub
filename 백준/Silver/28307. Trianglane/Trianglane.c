#include <stdio.h>

int main(void)
{
	int i, j;
	int c;
	int a[2][200000];
	long long s = 0;
	
	scanf("%d", &c);
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
			
			if (a[i][j])
			{
				s += 3;
			}
		}
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < c - 1; j++)
		{
			if (a[i][j] && a[i][j + 1])
			{
				s -= 2;
			}
		}
	}
	
	for (i = 0; i < c; i += 2)
	{
		if (a[0][i] && a[1][i])
		{
			s -= 2;
		}
	}
	
	printf("%lld", s);
	
	return 0;
}