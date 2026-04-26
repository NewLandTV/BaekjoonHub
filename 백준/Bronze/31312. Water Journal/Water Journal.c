#include <stdio.h>

int main(void)
{
	int i;
	int n, a, b;
	int w, c[51] = { 0, };
	
	scanf("%d %d %d", &n, &a, &b);
	
	while (--n)
	{
		scanf("%d", &w);
		
		c[w - 1] = 1;
	}
	
	if (!c[a - 1] && !c[b - 1])
	{
		printf("-1");
		
		return 0;
	}
	
	if (!c[a - 1])
	{
		printf("%d", a);
		
		return 0;
	}
	
	if (!c[b - 1])
	{
		printf("%d", b);
		
		return 0;
	}
	
	for (i = a; i <= b; i++)
	{
		printf("%d\n", i);
	}
	
	return 0;
}