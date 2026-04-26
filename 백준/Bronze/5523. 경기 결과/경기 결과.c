#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	int winA = 0, winB = 0;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		
		if (a > b)
		{
			winA++;
		}
		else if (a < b)
		{
			winB++;
		}
	}
	
	printf("%d %d", winA, winB);
	
	return 0;
}