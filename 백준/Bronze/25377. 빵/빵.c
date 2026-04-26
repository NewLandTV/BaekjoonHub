#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	int min = 1001;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		
		if (a <= b && min > b)
		{
			min = b;
		}
	}
	
	if (min == 1001)
	{
		min = -1;
	}
	
	printf("%d", min);
	
	return 0;
}