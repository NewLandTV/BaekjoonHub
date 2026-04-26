#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		if (i * i + i + 1 == n)
		{
			break;
		}
	}
	
	printf("%d", i);
	
	return 0;
}