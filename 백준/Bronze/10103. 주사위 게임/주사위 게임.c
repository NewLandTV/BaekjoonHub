#include <stdio.h>

int main(void)
{
	int n;
	int a, b;
	int p1 = 100, p2 = 100;
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf("%d %d", &a, &b);
		
		if (a < b)
		{
			p1 -= b;
		}
		else if (a > b)
		{
			p2 -= a;
		}
	}
	
	printf("%d\n", p1);
	printf("%d", p2);
	
	return 0;
}