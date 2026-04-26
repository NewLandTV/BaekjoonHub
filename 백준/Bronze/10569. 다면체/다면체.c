#include <stdio.h>

int main(void)
{
	int t;
	int v, e;
	
	scanf("%d", &t);
	
	while (t--)
	{
		scanf("%d %d", &v, &e);
		printf("%d\n", e - v + 2);
	}
	
	return 0;
}