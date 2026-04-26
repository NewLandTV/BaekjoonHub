#include <stdio.h>

int main(void)
{
	int n;
	int o;
	int p;
	
	scanf("%d", &n);
	scanf("%d", &o);
	
	p = o / --n;
	
	if (o - p * n == 0)
	{
		printf("%d %d", o + p - 1, o + p);
	}
	else
	{
		printf("%d %d", o + p, o + p);
	}
	
	return 0;
}