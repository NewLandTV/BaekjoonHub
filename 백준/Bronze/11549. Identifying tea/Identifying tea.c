#include <stdio.h>

int main(void)
{
	int t;
	int a, b, c, d, e;
	int count = 0;
	
	scanf("%d", &t);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (t == a)
	{
		count++;
	}
	if (t == b)
	{
		count++;
	}
	if (t == c)
	{
		count++;
	}
	if (t == d)
	{
		count++;
	}
	if (t == e)
	{
		count++;
	}
	
	printf("%d", count);
	
	return 0;
}