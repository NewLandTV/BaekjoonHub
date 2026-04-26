#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int x, cnt = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i < n; i++)
	{
		for (j = i + 2; j < n; j++)
		{
			x = n - i - j;
			
			if (x > 0 && !(x & 1))
			{
				cnt++;
			}
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}