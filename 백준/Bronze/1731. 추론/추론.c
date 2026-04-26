#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int a, b, c, x;
	
	scanf("%d", &n);
	scanf("%d %d %d", &a, &b, &c);
	
	x = c;
	
	for (i = 3; i < n; i++)
	{
		scanf("%d", &x);
	}
	
	if (b - a == c - b)
	{
		printf("%d", x + b - a);
		
		return 0;
	}
	
	printf("%d", x * (b / a));
	
	return 0;
}