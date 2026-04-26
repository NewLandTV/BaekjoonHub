#include <stdio.h>

#define Abs(x) ((x) > 0 ? (x) : -(x))

int main(void)
{
	int i;
	int a, b;
	int k, x;
	int p;
	int c = 0;
	
	scanf("%d %d", &a, &b);
	scanf("%d %d", &k, &x);
	
	for (i = 0; i <= b - a; i++)
	{
		p = a + i;
		
		if (Abs(k - p) <= x)
		{
			c++;
		}
	}
	
	if (c == 0)
	{
		printf("IMPOSSIBLE");
		
		return 0;
	}
	
	printf("%d", c);
	
	return 0;
}