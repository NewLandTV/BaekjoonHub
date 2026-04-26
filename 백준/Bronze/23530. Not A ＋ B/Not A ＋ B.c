#include <stdio.h>

int main(void)
{
	int t;
	int a, b;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a);
	}
	
	return 0;
}