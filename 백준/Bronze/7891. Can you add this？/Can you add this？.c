#include <stdio.h>

int main(void)
{
	int t;
	int x, y;
	
	for (scanf("%d", &t); t > 0; t--)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", x + y);
	}
	
	return 0;
}