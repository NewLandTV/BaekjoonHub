#include <stdio.h>

int main(void)
{
	int x, l, r;
	
	scanf("%d %d %d", &x, &l, &r);
	
	if (x >= r)
	{
		printf("%d", r);
	}
	else if (x < r)
	{
		if (x > l)
		{
			printf("%d", x);
		}
		else
		{
			printf("%d", l);
		}
	}
	else if (x <= l)
	{
		printf("%d", l);
	}
	
	return 0;
}