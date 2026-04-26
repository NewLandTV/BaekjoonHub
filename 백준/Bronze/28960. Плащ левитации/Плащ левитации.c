#include <stdio.h>

int main(void)
{
	int h, l, a, b;
	
	scanf("%d %d %d %d", &h, &l, &a, &b);
	
	if ((a <= l && b <= h * 2) || (b <= l && a <= h * 2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}