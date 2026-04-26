#include <stdio.h>

int main(void)
{
	int n, x, y;
	int a;
	
	scanf("%d %d %d", &n, &x, &y);
	
	while (n--)
	{
		scanf("%d", &a);
		printf("%.0f\n", (double)a / x * y);
	}
	
	return 0;
}