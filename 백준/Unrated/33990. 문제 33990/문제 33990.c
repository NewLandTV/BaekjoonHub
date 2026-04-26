#include <stdio.h>

int main(void)
{
	int n;
	int a, b, c;
	int min = 1000;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		
		if (a + b + c >= 512 && min > a + b + c)
		{
			min = a + b + c;
		}
	}
	
	if (min == 1000)
	{
		printf("-1");
		
		return 0;
	}
	
	printf("%d", min);
	
	return 0;
}