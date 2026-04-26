#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	int sum, cnt = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = i, sum = 0; j; j /= 10)
		{
			sum += j % 10;
		}
		
		if (i % sum == 0)
		{
			cnt++;
		}
	}
	
	printf("%d", cnt);
	
	return 0;
}