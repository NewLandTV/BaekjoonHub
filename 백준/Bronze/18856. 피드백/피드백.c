#include <stdio.h>

int main(void)
{
	int i;
	int n;
	
	scanf("%d", &n);
	
	printf("%d\n", n);
	
	for (i = 1; i <= n; i++)
	{
		if (i == 2)
		{
			printf("2 ");
		}
		else if (i == n)
		{
			printf("997");
		}
		else
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}