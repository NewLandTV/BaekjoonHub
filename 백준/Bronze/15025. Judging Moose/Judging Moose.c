#include <stdio.h>

int main(void)
{
	int l, r;
	int max;
	
	scanf("%d %d", &l, &r);
	
	if (l == 0 && r == 0)
	{
		printf("Not a moose");
		
		return 0;
	}
	
	if (l != r)
	{
		max = l > r ? l : r;
		
		printf("Odd %d", max * 2);
		
		return 0;
	}
	
	printf("Even %d", l + r);
	
	return 0;
}